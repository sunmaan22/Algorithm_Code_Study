#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if(a>b){
        cout << a-b;
    }
    if(a<b){
    cout <<b-a;
    }
    if(a==b){
        cout << 0;
    }
    // Please write your code here.
    return 0;
}