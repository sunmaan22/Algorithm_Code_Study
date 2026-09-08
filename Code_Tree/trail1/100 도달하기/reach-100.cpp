#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int n,arr[MAX];
    cin>>n;
    arr[0]=1, arr[1]=n;
    cout<< arr[0] <<" "<<arr[1]<<" ";
    for(int i=2;i<MAX;++i){
        arr[i]=arr[i-1]+arr[i-2];
        cout<<arr[i]<<" ";
        if(arr[i]>=100) break;

    }
    // Please write your code here.
    return 0;
}