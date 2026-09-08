#include <iostream>
using namespace std;

int main() {
    int i,j,k,l,n;
    cin >> n;

    for(i=n;i>=1;--i){
        for(j=1;j<=i;++j){
            cout << "*" << " ";
        }
        cout << endl;
    }
    for(k=2;k<=n;++k){
        for(l=1;l<=k;++l){
            cout << "*" << " ";
        }
        cout <<endl;
    }
    // Please write your code here.
    return 0;
}