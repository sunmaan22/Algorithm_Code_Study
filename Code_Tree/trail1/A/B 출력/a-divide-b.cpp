#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    // 1. 정수 부분 출력
    cout << a / b << ".";

    // 2. 소수점 이하 20자리 직접 계산 및 출력
    a %= b;
    for (int i = 0; i < 20; i++) {
        a *= 10;
        cout << a / b;
        a %= b;
    }

    return 0;
}