#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int arr[MAX];
    cin>>arr[0]>>arr[1];
    cout << arr[0]<<" "<<arr[1]<<" ";
    for(int i=2;i<10;++i){
        arr[i]=arr[i-1]+2*arr[i-2];
        cout<<arr[i]<<" ";
    }
    // Please write your code here.
    return 0;
}