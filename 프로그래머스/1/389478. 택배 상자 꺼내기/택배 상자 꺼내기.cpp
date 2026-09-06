#include <string>
#include <vector>

using namespace std;

int solution(int n, int w, int num) {
    int arr[101][101] = {0};
    int target_line = 0, target_col = 0;
    
    // 1. 상자 배치하기
    for (int i = 1; i <= n; ++i) {
        int line = (i - 1) / w + 1; // 층 번호 (1층부터 시작)
        int col;
        
        // 지그재그 위치 계산
        int idx = (i - 1) % w;
        if (line % 2 != 0) {
            col = idx + 1;         // 홀수 층: 왼쪽 -> 오른쪽
        } else {
            col = w - idx;         // 짝수 층: 오른쪽 -> 왼쪽
        }
        
        arr[line][col] = i; // 상자 번호 저장
        
        // 꺼내야 할 target 상자의 위치 기억
        if (i == num) {
            target_line = line;
            target_col = col;
        }
    }
    
    // 2. target 상자 위로 몇 개의 상자가 있는지 세기
    int cnt = 0;
    for (int l = target_line; l <= 100; ++l) {
        if (arr[l][target_col] == 0) break; // 상자가 없으면 종료
        cnt++;
    }
    
    return cnt;
}