#include <iostream>
using namespace std;

int main() {
    int n,cnt=0;
    cin >> n;
    while(1){
        if(n==1){
            cout << cnt;
            break;
        }
        if(n%2==0){
            n /= 2;
            cnt++;
        }
        else{
            n = n*3+1;
            cnt++;
        }
    }
    // Please write your code here.
    return 0;
}