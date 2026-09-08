#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    bool pc = true;
    for(int i=2;i<=n-1;++i){
        if(n%i==0){
            cout << "C";
            pc = false;
            break;
        }

    }
    if(pc==true){
        cout << "P";
    }
    // Please write your code here.
    return 0;
}