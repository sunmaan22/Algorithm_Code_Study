#include <iostream>
#include <algorithm> // sort 함수를 사용하기 위해 추가!
using namespace std;

int main() {
    // 3칸짜리 배열을 만들고 한 번에 입력받음
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];

    // 배열을 오름차순으로 정렬
    sort(arr, arr + 3); 

    // 0, 1, 2 인덱스 중 한가운데인 1번 인덱스가 무조건 중앙값!
    cout << arr[1]; 

    return 0;
}