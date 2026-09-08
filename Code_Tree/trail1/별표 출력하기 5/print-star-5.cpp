#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    // 1. 총 n개의 줄을 출력합니다.
    for (int i = n; i >= 1; i--) {
        
        // 2. 각 줄마다 (별i개) 묶음을 i번 반복합니다.
        for (int j = 0; j < i; j++) {
            
            // 3. 별을 i개 출력합니다.
            for (int k = 0; k < i; k++) {
                cout << "*";
            }
            
            // 묶음 사이에 공백 하나를 출력합니다.
            cout << " ";
        }
        
        // 한 줄 출력이 끝나면 줄바꿈을 합니다.
        cout << "\n";
    }

    return 0;
}