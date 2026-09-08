#include <iostream>
using namespace std;

int main() {
    char arr[5][3];

    // 1. 입력받기
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // 2. 대문자로 변환하여 출력하기
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            // toupper() 함수를 쓰거나, arr[i][j] - 'a' + 'A' 방식으로 변환
            char uppercase = toupper(arr[i][j]);
            cout << uppercase << " ";
        }
        cout << "\n"; // 행이 끝날 때마다 줄바꿈
    }

    return 0;
}