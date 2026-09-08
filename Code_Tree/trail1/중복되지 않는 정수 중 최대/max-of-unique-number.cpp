#include <iostream>
#define MAX 1000

using namespace std;

int N,input_num;
int nums[MAX+1]={0};

int main() {
    cin >> N;
    for (int i = 0; i < N; i++){//이건 횟수 맞음 {
        cin >> input_num;
        nums[input_num]++;//1이면 input_num 1번 나왔다고 1증가
    }
    for(int j=MAX;j>=1;--j){
        //이건 nums배열 확인용이니까 max부터 숫자시작
        if(nums[j]==1){
            cout<<j;
            return 0;
        }
    }
    cout<<-1;
    return 0;

    // Please write your code here.


}
