#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int arr[MAX];
    for(int i=0;i<MAX;++i){
        cin>>arr[i];
        if(arr[i]==0) break;
        if(arr[i]%2==0){cout<<arr[i]/2<<" ";}
        else{cout<<arr[i]+3<<" ";}
    }
    // Please write your code here.
    return 0;
}