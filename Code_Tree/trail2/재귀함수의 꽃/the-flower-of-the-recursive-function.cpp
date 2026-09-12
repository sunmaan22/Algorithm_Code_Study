#include <iostream>

using namespace std;

int N;

void down(int N){
    if(N==0) return;
    cout<<N<<" ";
    down(N-1);
}
void up(int N){
    if(N==0) return;
    up(N-1);
    cout<<N<<" ";
}

int main() {
    cin >> N;
    down(N);
    up(N);

    // Please write your code here.

    return 0;
}