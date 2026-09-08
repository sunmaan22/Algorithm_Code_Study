#include <iostream>
using namespace std;

int main() {
    int a,b,t=1;
    cin >> a >> b;

    for(int i=a;i<=b;++i){
        t *= i;
    }
    cout << t;
    // Please write your code here.
    return 0;
}