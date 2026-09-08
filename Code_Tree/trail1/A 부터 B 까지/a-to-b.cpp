#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;

    while(a<=b){
        cout << a << " ";
        a = a%2==0 ? a+3 : a*2;  

    }
    // Please write your code here.
    return 0;
}