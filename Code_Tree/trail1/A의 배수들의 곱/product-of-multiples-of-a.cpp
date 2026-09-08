#include <iostream>
using namespace std;

int main() {
    int a,b,t=1;
    cin >> a>>b;

    for(int i=1;i<=b;++i){
        if(i%a==0){
            t *= i;
        }
    }
    cout << t;
    // Please write your code here.
    return 0;
}