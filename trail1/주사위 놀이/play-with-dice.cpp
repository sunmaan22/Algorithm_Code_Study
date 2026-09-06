#include <iostream>
using namespace std;

int main() {
    int arr[7]={},n;
    for(int i=1;i<=10;++i){
        cin>>n;
        arr[n]++;
    }
    for(int j=1;j<=6;++j){
        cout<<j<<" - "<<arr[j]<<endl;
    }
    // Please write your code here.
    return 0;
}