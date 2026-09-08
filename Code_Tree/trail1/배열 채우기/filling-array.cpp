#include <iostream>
using namespace std;

int main() {
    int arr[10],cnt=-1;
    for(int i=0;i<10;++i){
        cin>>arr[i];
        if(arr[i]==0) break;
        cnt++;
    }
    for(int j=cnt;j>=0;--j){
        cout<<arr[j]<<" ";
    }
    // Please write your code here.
    return 0;
}