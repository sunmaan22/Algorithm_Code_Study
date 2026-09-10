#include <iostream>

using namespace std;

void get_star(int n, int m){
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<"1";
        }
        cout<<endl;
    }
}

int n, m;

int main() {
    cin >> n >> m;
    get_star(n,m);

    // Please write your code here.

    return 0;
}