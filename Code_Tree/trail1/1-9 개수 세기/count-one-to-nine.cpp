#include <iostream>
using namespace std;

int main() {
    int arr[10]={},n,x;
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>x;
        arr[x]++;
    }
    for(int j=1;j<=9;++j){
        cout<<arr[j]<<endl;
    }
    // Please write your code here.
    return 0;
}