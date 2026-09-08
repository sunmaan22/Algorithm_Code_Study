#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int n, arr[MAX];
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
    }
    for(int j=n-1;j>=0;--j){
        if(arr[j]%2==0){
            cout<<arr[j]<<" ";
        }
    }
    // Please write your code here.
    return 0;
}