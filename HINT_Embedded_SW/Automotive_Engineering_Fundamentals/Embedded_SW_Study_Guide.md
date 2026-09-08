# Embedded SW Study Guide for Automotive Systems

자동차공학개론 내용을 임베디드 SW 개발자가 실제로 연결해서 이해하기 위한 보조 노트이다.

## 1. 기본 제어 루프

```c
while (1) {
    sensor_data = read_sensors();
    state = estimate_vehicle_state(sensor_data);
    command = control_algorithm(state, target);
    send_actuator_command(command);
    communicate_with_other_ecus();
    diagnostics();
}
```

실제 ECU에서는 단순 무한루프 하나가 아니라 주기 태스크, 인터럽트, 통신 태스크, 진단 태스크 등으로 분리된다.

## 2. Sensor → ECU → Actuator 매핑

| 시스템 | 주요 센서 입력 | ECU 판단 | 액추에이터/출력 |
|---|---|---|---|
| ABS | Wheel Speed | Wheel Slip | Hydraulic Modulator |
| TCS | Wheel Speed, Steering, Throttle | Drive Slip | Engine Torque / Brake Pressure |
| VDC | Wheel Speed, Steering Angle, Yaw Rate, Lateral G | Vehicle Stability | Individual Wheel Brake / Engine Torque |
| EPS | Vehicle Speed, Steering Input | Assist Level | Electric Motor |
| AFS | Speed, Steering, Yaw | Steering Ratio | Steering Actuator |
| ASCC | Radar | Distance / Relative Speed | Throttle / Brake |
| LKAS | Camera, Radar | Lane Position | EPS Steering |
| AEB | Radar | Collision Risk | Brake |
| EV Drive | Accelerator, Motor/Battery State | Requested Torque | Inverter / Motor |

## 3. 상태기계로 생각하기

자동차 제어는 FSM으로 해석하면 이해가 쉽다.

예: AEB

```text
NORMAL
  ↓ collision risk detected
WARNING
  ↓ risk increases
BRAKE_ASSIST
  ↓ emergency threshold
AUTO_BRAKING
  ↓ safe
RECOVERY
  ↓
NORMAL
```

각 상태 전환에는 센서 임계값, 시간 조건, 히스테리시스, 고장 여부 등이 함께 들어간다.

## 4. 실시간 제어에서 생각할 문제

- 센서 샘플링 주기
- 제어 루프 실행 주기
- Worst Case Execution Time
- Interrupt latency
- CAN message deadline
- Sensor timeout
- Invalid data 처리
- Actuator saturation
- Fail-safe 상태
- Watchdog

## 5. CAN 통신으로 연결되는 이유

하나의 ECU가 모든 센서를 직접 읽는 구조가 아니다.

```text
Wheel Speed Sensor
       ↓
     ABS ECU
       ↓ CAN
 ┌─────┼────────┐
 ↓     ↓        ↓
TCS   VDC      Cluster
```

따라서 다른 ECU의 데이터를 사용할 때는 다음을 고려한다.
- Message ID
- Signal encoding
- Period
- Timeout
- Alive counter
- CRC
- Fault state

## 6. EV 제어 구조

```text
Accelerator / Brake
        ↓
       VCU
   ┌────┼─────┐
   ↓    ↓     ↓
  BMS  MCU   Brake ECU
        ↓
     Inverter
        ↓
       Motor
```

### BMS
- Cell Voltage
- Cell Temperature
- Pack Voltage
- SOC
- Battery Protection

### MCU / Inverter
- VCU torque command 수신
- DC 전력을 모터용 AC로 변환
- Motor speed / torque 제어

### 회생제동
```text
Vehicle Kinetic Energy
        ↓
      Motor
        ↓ generator operation
     Inverter
        ↓
      Battery
```

## 7. ADAS SW 파이프라인

```text
Camera / Radar / LiDAR
        ↓
Signal Processing
        ↓
Object / Lane Detection
        ↓
Sensor Fusion
        ↓
Situation Assessment
        ↓
Planning / Decision
        ↓
Vehicle Control
        ↓
Steering / Brake / Acceleration
```

## 8. 자동차공학과 임베디드 과목 연결

| 자동차공학 | 임베디드 SW 개념 |
|---|---|
| Sensor | GPIO / ADC / SPI / I2C / Capture |
| ECU | MCU / RTOS / Firmware |
| Wheel Speed | Timer / Input Capture |
| Motor Control | PWM |
| Throttle / Valve | PWM / Driver |
| CAN Network | CAN Controller / ISR / Message Queue |
| VDC | Sensor Fusion + Feedback Control |
| BMS | ADC + Monitoring + State Estimation |
| ADAS | Vision / AI + Real-time Processing |
| Fail-safe | Watchdog / Diagnostics / Fault State Machine |

## 9. 공부할 때 반드시 묻기

각 자동차 시스템마다 다음 6개 질문을 답할 수 있어야 한다.

1. **무엇을 측정하는가?**
2. **어떤 센서를 쓰는가?**
3. **어느 ECU가 처리하는가?**
4. **어떤 알고리즘/조건으로 판단하는가?**
5. **무엇을 구동하는가?**
6. **다른 ECU와 어떤 정보를 교환하는가?**

이 틀로 ABS, TCS, VDC, EPS, EV, ADAS를 정리하면 단순 기계구조 암기에서 임베디드 시스템 이해로 넘어갈 수 있다.
