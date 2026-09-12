#include <iostream>

using namespace std;

void printStars(int n) {
    // 종료 조건 (base case)
    if (n == 0) return;

    // 1. 재귀 호출 전: 별 n개 출력 (줄어드는 부분)
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;

    // 2. 재귀 호출: n-1에 대해 동일한 작업 수행
    printStars(n - 1);

    // 3. 재귀 호출 후: 별 n개 출력 (다시 늘어나는 부분)
    for (int i = 0; i < n; i++) {
        cout << "* ";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    
    printStars(n);
    
    return 0;
}