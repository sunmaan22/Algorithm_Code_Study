#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;++i){
        for(int j=1;j<=i;++j){
            cout <<"*" <<" ";
        }
        cout << endl;
    }
    for(int k=n-1;k>=1;--k){
        for(int m=1;m<=k;++m){
            cout << "*" << " ";

        }
        cout << endl;
    }
    // Please write your code here.
    return 0;
}