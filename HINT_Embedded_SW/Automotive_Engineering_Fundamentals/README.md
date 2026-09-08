# Automotive Engineering Fundamentals

> 자동차공학개론 강의자료를 임베디드 SW 관점에서도 다시 보기 좋게 정리한 학습 노트이다.

## 1. 자동차의 기본 정의와 제원

### 자동차의 정의
- 자동차관리법 관점에서 자동차는 원동기로 육상에서 이동하도록 제작된 용구이며, 피견인자동차도 포함한다.
- 원동기는 자동차 구동을 주목적으로 하는 내연기관, 전동기 등의 동력발생장치이다.
- 자율주행자동차는 운전자 또는 승객의 조작 없이 스스로 운행 가능한 자동차를 의미한다.

### 주요 제원
자동차 제원은 크게 다음 네 범주로 본다.
- **Dimension**: 전장, 전폭, 전고, 축거, 윤거, 최저지상고, 오버행, 최소회전반경
- **Masses / Weight**: 공차중량, 최대적재량, 차량총중량, 축하중, 승차정원
- **Performance**: 최고속도, 최대출력, 토크, 구동력, 등판능력, 변속비, 총감속비, 정지거리, 연료소비량/소비율

### 치수 용어
- **Overall Length / 전장**: 차체 최전단과 최후단 사이 거리
- **Overall Width / 전폭**: 사이드미러를 제외한 차체 좌우 최대 폭
- **Overall Height / 전고**: 접지면부터 차체 최고점까지의 높이
- **Wheelbase / 축거**: 앞바퀴 중심과 뒷바퀴 중심 사이 거리
- **Tread / Track / 윤거**: 좌우 바퀴 중심 사이 거리
- **Ground Clearance / 최저지상고**: 노면과 차체 하부 최저점 사이 거리
- **Overhang**: 차체 끝단과 해당 차축 중심 사이 거리
- **Minimum Turning Radius**: 조향을 최대로 했을 때 외측 바퀴가 그리는 원의 반지름

## 2. 자동차 기본 구조

자동차는 크게 **Body + Chassis** 구조로 볼 수 있다.

### Body
- Monocoque
- Frame

### Chassis 주요 계통
1. Engine
2. Power Train
3. Suspension
4. Steering
5. Brake
6. Electric / Electronic System

임베디드 SW 관점에서는 이 모든 기계계통이 결국 **Sensor → ECU → Actuator** 구조로 전자화된다는 점이 핵심이다.

## 3. 구동방식

| 방식 | 구성 | 특징 |
|---|---|---|
| FF | Front Engine + Front Wheel Drive | 소·중형 승용차에 많이 사용, 실내공간/연비/견인력 우수 |
| FR | Front Engine + Rear Wheel Drive | 중량배분, 승차감, 선회성능에 유리 |
| RR | Rear Engine + Rear Wheel Drive | 실내공간 활용에 유리, 후방 중량 편중 |
| 4WD | Four Wheel Drive | 험로·등판·선회 성능 우수, 구조 복잡 및 연비 저하 |

## 4. 엔진 기본 구조와 작동

### 4행정 사이클
1. 흡입
2. 압축
3. 동력
4. 배기

### 주요 엔진 부품
- **Cylinder Head**: 흡배기 밸브, 캠축, 점화플러그 등이 설치되며 연소실 형성
- **Cylinder Block**: 엔진 기초 구조물, 실린더와 워터재킷 및 크랭크케이스 포함
- **Piston**: 연소 압력을 받아 커넥팅로드로 전달
- **Connecting Rod**: 피스톤 왕복운동의 힘을 크랭크축으로 전달
- **Crankshaft**: 피스톤의 직선운동을 회전운동으로 변환
- **Valve Train**: 캠축 구동력을 이용해 흡·배기 밸브를 타이밍에 맞게 개폐
- **Camshaft**: 밸브 개폐 및 일부 보조기구 구동
- **Engine Timing System**: 크랭크축과 캠축 사이의 기계적 타이밍 동기화

## 5. 윤활 시스템

### 목적
엔진 내부 미끄럼 운동부에 오일을 공급해 유막을 형성하고, 큰 고체마찰을 작은 액체마찰로 바꾼다.

### 엔진오일 주요 기능
1. 감마 작용
2. 기밀 유지
3. 냉각
4. 청정
5. 응력 분산
6. 방청

### 오일 흐름
`Oil Pan → Oil Strainer → Oil Pump → Oil Filter → Oil Gallery → Cylinder Head / Piston / Crankshaft Bearing`

### 주요 부품
- Oil Pan
- Sump / Baffle
- Oil Pump
- Oil Filter
- Pressure Regulating Valve

## 6. 냉각 시스템

엔진의 동력행정에서 발생한 큰 열을 제거해 정상 작동온도를 유지한다.

### 핵심 부품
- Radiator
- Water Pump
- Thermostat
- Cooling Fan
- Water Jacket
- Radiator Cap

### 작동 흐름
- 냉간 시 Thermostat 닫힘
- 온도 상승 시 Thermostat 점진 개방
- 정상 온도에서 Radiator 방향으로 완전 순환

## 7. 연료 시스템

기본 구성:
- Fuel Tank
- Fuel Pump
- Fuel Filter
- Fuel Injector
- Fuel Pipe / Rail
- ECM

ECM은 운전 상태에 맞게 공기-연료 혼합비를 정밀 제어한다.

### Injector
- 연료펌프가 압송한 연료를 흡기라인 또는 연소실에 정밀 분사
- 운전조건에 맞는 공연비 구현

### Fuel Pressure Regulator
- 연료계통 압력을 일정 범위로 유지

## 8. 배출가스 제어

자동차에서 주요하게 다루는 가스:
- 배기가스
- Blow-by Gas
- 증발가스

### 대표 유해물질
- CO
- HC
- NOx

전자제어 엔진 시스템은 출력 향상뿐 아니라 배출가스 저감을 위해 연료분사와 점화 등을 정밀 제어한다.

## 9. 자동차 전자제어의 핵심 구조

자동차 전자제어는 다음 3요소로 구성된다.

```text
Sensor → ECU → Actuator
```

- **Sensor**: 엔진상태, 주행상태, 운전자 의도, 차량 자세 등을 측정
- **ECU**: 센서 출력으로 차량 상태를 판단하고 최적 제어값 계산
- **Actuator**: ECU 명령에 따라 실제 기계/전기 장치를 동작

이 구조는 임베디드 SW에서 가장 중요하다. 사실상 자동차 제어 SW는 입력을 읽고, 상태를 추정하고, 제어 알고리즘을 실행하고, 출력 액추에이터를 구동하는 실시간 시스템이다.

## 10. 전자제어 엔진 / 새시 / 전장

### Engine Electronics
- GDI
- MPI / SPI
- CRDI
- 연료분사 및 점화 제어

### Chassis Electronics
- 제동
- 조향
- 4WD
- 변속
- 현가
- 차량 자세제어

### Electric / Convenience Electronics
- DIS
- 도난방지
- Telematics
- GPS
- 각종 편의/안전 제어

## 11. 현가장치

### 목적
- 노면 충격 및 진동 흡수
- 승차감 향상
- 차체와 차축 연결
- 타이어 접지성 확보

### 대표 구성
- Coil Spring
- Shock Absorber
- Stabilizer Bar
- Control Arm
- Strut

### 종류
- 일체차축식
- Wishbone
- MacPherson
- Multi-link
- 전자제어 현가장치
- Air Suspension

## 12. 조향 전자제어

### EPS / EHPS
전자제어 동력조향은 차속과 조향입력을 바탕으로 조타력을 조절한다.

대표 입력:
- Vehicle Speed
- Steering Angle / Steering Angular Velocity

대표 출력:
- Motor Speed / Assist Torque
- Pump Flow / Pressure

### AFS
Active Front Steering은 상황에 따라 조향기어비를 변경한다.
- 저속: 작은 핸들 회전으로 큰 휠 조향각
- 고속: 조향 민감도를 낮춰 안정성 향상

주요 구성:
- Motor
- Reduction Gear
- ECU
- Motor Angle Sensor
- Vehicle Speed Sensor
- Yaw Rate Sensor

## 13. 제동 및 차량 자세제어

### ABS
주요 구성:
- Wheel Speed Sensor
- ABS ECU
- Hydraulic Unit / Modulator

### TCS
센서 입력을 이용하여 구동륜 슬립을 제어한다.
- Wheel Speed Sensor
- Steering Angle Sensor
- Throttle Position Sensor
- TCU
- Engine ECU
- CAN communication

### VDC / ESC
차량 자세를 안정화하는 시스템이다.

대표 센서:
- Wheel Speed
- Steering Angle
- Yaw Rate
- Lateral Acceleration
- Brake Pressure

제어 대상:
- Wheel Individual Braking
- Engine Torque
- Transmission

## 14. 차량용 센서와 ECU 관점

강의에서 센서는 물리·화학·생물량을 측정하여 전기량으로 변환하는 소자로 설명된다.

자동차 임베디드 SW 관점에서 자주 등장하는 센서:
- Wheel Speed Sensor
- Steering Angle Sensor
- Yaw Rate Sensor
- Lateral G Sensor
- Throttle Position Sensor
- Accelerator Position Sensor
- Pressure Sensor
- Temperature Sensor
- GPS
- Radar
- LiDAR
- Camera

## 15. 전기자동차 xEV

### 분류
- HEV
- PHEV
- EV
- FCEV

### EV 주요 구성
- High Voltage Battery
- BMS
- Electric Motor
- Inverter
- Converter
- Regenerative Braking
- VCU
- MCU
- OBC / LDC
- Junction Box
- Charging System

### 회생제동
감속 시 구동모터를 발전기로 사용해 운동에너지를 전기에너지로 변환하고 배터리를 충전한다.

### 인버터 / 컨버터
- AC-DC Converter: AC → DC
- DC-AC Inverter: DC → AC
- DC-DC Converter: DC 전압 레벨 변환
- AC-AC Converter: AC → AC

인버터는 VCU/HCU 등의 CAN 명령을 받아 구동모터의 회전속도와 토크를 제어하는 핵심 전력전자 장치다.

## 16. 차량 네트워크

전기차와 전자제어 자동차에서는 여러 ECU가 정보를 주고받아야 한다.

대표 예시:
- Engine ECU ↔ TCU
- VDC ↔ EMS
- Radar Sensor ↔ VDC / Cluster / TCU
- VCU ↔ MCU / BMS / OBC

강의자료에서도 TCS 및 EV 시스템의 제어기들이 **CAN 통신**으로 정보를 교환하는 구조를 제시한다.

임베디드 SW 관점 핵심:
```text
Sensor Input
   ↓
ECU / MCU
   ↓
Control Algorithm
   ↓
CAN / LIN Communication
   ↓
Actuator Control
```

## 17. 미래자동차 핵심 트렌드

강의자료에서 정리한 핵심 키워드:
- **SDV**: Software Defined Vehicle
- **ADAS**: Advanced Driver Assistance System
- **MBSE**: Model-Based Systems Engineering
- **xEV**
- **AI**

### SDV
차량 주요 기능과 성능이 하드웨어보다 소프트웨어 중심으로 구현되고, 업데이트를 통해 기능과 성능을 개선하는 구조이다.

### MBSE
요구사항부터 설계, 분석, 검증/검증(V&V), 전체 라이프사이클에 모델링을 적용한다.

## 18. 자율주행 시스템

자율주행의 핵심 흐름:

```text
Perception → Localization / Mapping → Planning / Decision → Control
```

### 인지
- Radar
- LiDAR
- Camera
- Night Vision
- High Precision GPS
- HD Map

### 판단
- Rule-Based Algorithm
- AI
- Path Optimization
- Collision Prediction
- Emergency Handling

### 제어
판단 결과에 따라 다음 액추에이터를 제어한다.
- Steering
- Brake
- Acceleration

### 네트워크
- V2V
- V2I
- V2P
- V2X

## 19. ADAS 대표 시스템

- ASCC / Smart Cruise Control
- LDWS
- LKAS
- AEB / AEBS
- HDA
- BSD
- LCA
- PGS

### ASCC
전방 레이더로 선행차량의 거리와 상대속도를 측정하고 목표 차간거리 또는 속도를 유지한다.

### AEB
전방 레이더 등으로 충돌 위험을 판단하고 자동 제동을 수행한다.

### LKAS
카메라 또는 레이더로 차선을 인식하고 EPS와 연동해 능동적으로 차선을 유지한다.

## 20. 임베디드 SW 관점에서 연결해서 봐야 할 것

자동차공학을 임베디드 관점으로 다시 보면 다음 연결이 핵심이다.

```text
Mechanical Plant
   ↕
Sensors
   ↓
ADC / Digital Interface
   ↓
MCU / ECU Firmware
   ↓
Control Logic / State Machine
   ↓
CAN / LIN / Automotive Network
   ↓
Driver Circuit
   ↓
Actuator
```

### 공부 포인트
1. 센서 값이 어떤 물리량을 의미하는가
2. ECU가 어떤 상태변수를 계산하는가
3. 제어 알고리즘이 어떤 조건에서 동작하는가
4. 어떤 액추에이터를 어떻게 구동하는가
5. ECU끼리 어떤 데이터를 통신하는가
6. Fail-safe / Diagnostic / Fault Detection이 어떻게 들어가는가
7. 실시간성, 주기성, 인터럽트, 태스크 우선순위가 어떻게 결정되는가

## 21. 추천 학습 순서

```text
자동차 기본 구조
→ 엔진 / 새시 / 전장
→ Sensor-ECU-Actuator
→ ABS / TCS / VDC / EPS
→ CAN 기반 ECU 통신
→ EV / BMS / Inverter / VCU
→ ADAS
→ Autonomous Driving
→ SDV / MBSE
```

## 22. 한 줄 요약

자동차 임베디드 SW는 결국 **센서로 차량 상태를 읽고, ECU가 실시간 판단을 수행하고, 네트워크로 협조하며, 액추에이터를 제어하는 분산 실시간 제어 시스템**이다.
