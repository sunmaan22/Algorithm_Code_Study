#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cin>>arr[0]>>arr[1];
    for(int i=2;i<10;++i){
        arr[i] = (arr[i-1]+arr[i-2])%10;
    }
    for(int j=0;j<10;++j){
        cout<<arr[j]<<" ";
    }
    // Please write your code here.
    return 0;
}