#include <iostream>
using namespace std;

int main() {
    int n;
    bool yn = true;
    for(int i=1;i<=5;++i){
        cin >> n;
        if(n%3!=0){
            cout << 0;
            yn = false;
            break;
        }
    }
    if(yn == true){
        cout << 1;
    }
    // Please write your code here.
    return 0;
}