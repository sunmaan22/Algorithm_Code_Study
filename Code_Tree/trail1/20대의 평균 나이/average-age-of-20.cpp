#include <iostream>
using namespace std;

int main() {
    int a,sum=0,cnt=0;

    while(1){
        cin >> a;
        if(a/10!=2){
            cout << fixed;
            cout.precision(2);
            cout << (double)sum/cnt;
            break;
        }
        sum += a;
        cnt++;

    }
    // Please write your code here.
    return 0;
}