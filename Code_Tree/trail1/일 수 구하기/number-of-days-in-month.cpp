#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        cout << 31;
    }
    else if(a==2){
        cout << 28;
    }
    else{
        cout << 30;
    }
    // Please write your code here.
    return 0;
}