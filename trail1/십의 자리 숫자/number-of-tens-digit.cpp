#include <iostream>
using namespace std;

int main() {
    int arr[10]={},n;
    while(1){
        cin>>n;
        if(n==0) break;
        arr[n/10]++;
    }
    for(int i=1;i<=9;++i){
        cout<<i<<" - "<<arr[i]<<endl;

    }
    // Please write your code here.
    return 0;
}