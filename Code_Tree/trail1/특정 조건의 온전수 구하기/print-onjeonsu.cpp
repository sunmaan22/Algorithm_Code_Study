#include <iostream>
using namespace std;

int main() {
    int n;
    cin >>n;
    for(int i=1;i<=n;++i){
        if(i%2==0||(i%5==0&&i%10!=0)||(i%3==0&&i%9!=0)){
            continue;
            //일의 자리 숫자가 5인지 확인할 때 i % 10 == 5로 작성하면 의도가 훨씬 직관적으로 읽힙니다.
        }
        cout << i << " ";
    }
    // Please write your code here.
    return 0;
}