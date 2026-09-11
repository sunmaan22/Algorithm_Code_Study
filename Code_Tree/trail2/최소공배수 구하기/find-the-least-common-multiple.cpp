#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

int min_val(int n,int m){
    for(int i=max(n,m);i<=n*m;++i){
        if(i%n==0&&i%m==0){
            return i;
            break;
        }
    }
}


int main() {
    cin >> n >> m;
    cout << min_val(n,m);

    // Please write your code here.

    return 0;
}