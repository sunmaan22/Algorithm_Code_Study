#include <iostream>

using namespace std;

int N;

// 1부터 N까지 출력하는 재귀함수
void printOneToN(int n) {
    if (n == 0) return;  // 종료 조건: 0에 도달하면 멈춤
    
    printOneToN(n - 1);  // 1부터 n-1까지 먼저 출력하도록 재귀 호출
    cout << n << " ";     // 돌아오는 길에 현재 n을 출력 (1, 2, ..., N 순서)
}

// N부터 1까지 출력하는 재귀함수
void printNToOne(int n) {
    if (n == 0) return;  // 종료 조건: 0에 도달하면 멈춤
    
    cout << n << " ";     // 먼저 현재 n을 출력 (N, N-1, ..., 1 순서)
    printNToOne(n - 1);  // 그 다음 n-1을 출력하도록 재귀 호출
}

int main() {
    cin >> N;
    
    printOneToN(N);
    cout << endl;
    
    printNToOne(N);
    cout << endl;

    return 0;
}