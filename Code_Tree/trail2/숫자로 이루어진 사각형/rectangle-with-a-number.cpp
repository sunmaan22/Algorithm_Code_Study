#include <iostream>

using namespace std;

int N,cnt=1;

void num_square(int N){
    for(int i=0;i<N;++i){
        for(int j=0;j<N;++j){
            if(cnt==10){
                cnt = 1;
            }
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
}

int main() {
    cin >> N;
    num_square(N);

    // Please write your code here.

    return 0;
}