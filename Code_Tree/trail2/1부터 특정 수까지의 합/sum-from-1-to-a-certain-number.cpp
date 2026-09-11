#include <iostream>

using namespace std;

int N;

int num(int N){
    int sum=0;
    for(int i=1;i<=N;++i){
        sum += i;
    }
    return sum/10;
}

int main() {
    cin >> N;
    cout<<num(N);

    // Please write your code here.

    return 0;
}