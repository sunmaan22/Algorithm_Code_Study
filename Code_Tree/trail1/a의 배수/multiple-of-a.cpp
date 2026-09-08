#include <iostream>
using namespace std;

int main() {
    int n,a,cnt;
    cin>>n>>a;
    cnt = 1;

    while(cnt<=n){
        if (cnt%a==0){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
        cnt ++;
    }

    // Please write your code here.
    return 0;
}