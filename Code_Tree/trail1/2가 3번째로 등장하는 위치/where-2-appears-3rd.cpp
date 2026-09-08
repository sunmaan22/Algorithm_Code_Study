#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int n, arr[MAX],cnt=0,idx;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>arr[i];
        if(arr[i]==2){
            cnt++;
            if(cnt==3){
                idx=i;
                cout<<idx;
                return 0;
            }
        }
    }
}