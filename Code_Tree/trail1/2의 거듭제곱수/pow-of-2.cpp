#include <iostream>
using namespace std;

int main() {
    int n,cnt=0;
    cin >> n;

    while(1){
        n /= 2;
        cnt++;
        if(n==1){
            cout << cnt;
            break;
        }
    }
    // Please write your code here.
    return 0;
}