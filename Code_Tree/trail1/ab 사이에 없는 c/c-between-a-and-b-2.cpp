#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    bool yn = false;
    cin >> a>>b>>c;
    for(int i=a;i<=b;++i){
        if(i%c==0){
            cout << "NO";
            yn = true;
            break;
        }
    }
    if(yn==false){
        cout << "YES";
    }

    // Please write your code here.
    return 0;
}