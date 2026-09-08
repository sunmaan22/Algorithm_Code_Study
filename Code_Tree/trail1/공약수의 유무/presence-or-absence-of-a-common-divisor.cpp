#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    bool m = false;
    for(int i=a;i<=b;++i){
        if(1920%i==0&&2880%i==0){
            cout << "1";
            m= true;
            break;
        }
    }
    if(m==false){
        cout << "0";

    }

    // Please write your code here.
return 0;  
}

