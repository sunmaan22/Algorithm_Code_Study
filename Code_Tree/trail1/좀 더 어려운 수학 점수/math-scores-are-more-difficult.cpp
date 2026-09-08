#include <iostream>
using namespace std;

int main() {
    int a,b,c,d; //a=a수학, b=a영어
    cin >> a >> b >> c >> d;
    if(a>c){
        cout << "A";
    }
    else if (a<c){
        cout << "B";
    }
    else{
        if(b>d){
            cout << "A";
        }
        else{
            cout << "B";
        }
    }
    // Please write your code here.
    return 0;
}