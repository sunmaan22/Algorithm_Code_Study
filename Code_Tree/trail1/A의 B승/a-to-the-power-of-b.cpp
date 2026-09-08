#include <iostream>
using namespace std;

int main() {
    int a,b,t=1;
    cin >> a >> b;
    for(int i=0;i<b;++i){
        t *= a;
    }
    cout << t;
    // Please write your code here.
    return 0;
}