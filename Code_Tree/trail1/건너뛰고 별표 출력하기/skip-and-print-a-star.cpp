#include <iostream>
using namespace std;

int main() {
    int i,j,k,l,n;
    cin >> n;

    for(i=1;i<=n;++i){
        for(j=1;j<=i;++j){
            cout << "*" ;
        }
        cout << endl << endl;
    }
    for(k=n-1;k>=1;--k){
        for(l=1;l<=k;++l){
            cout << "*" ;
        }
        cout <<endl << endl;
    }
    // Please write your code here.
    return 0;
}