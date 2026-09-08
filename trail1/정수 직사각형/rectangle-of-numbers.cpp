#include <iostream>
#define MAX 105
using namespace std;

int main() {
    int n,m,arr[MAX][MAX];
    cin >> n >> m;

    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout<<i*m+j+1<<" ";
        
        }
        cout<<endl;
    }


    // Please write your code here.
    return 0;
}