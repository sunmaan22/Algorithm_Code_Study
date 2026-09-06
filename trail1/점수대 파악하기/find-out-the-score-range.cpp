#include <iostream>
using namespace std;

int main() {
    int arr[11]={},n;
    while(cin>>n){
        if(n==0)break;
        arr[n/10]++;
    }
    for(int i=10;i>=1;--i){
        cout << i*10 <<" - "<<arr[i]<<endl;
    }

    // Please write your code here.
    return 0;
}