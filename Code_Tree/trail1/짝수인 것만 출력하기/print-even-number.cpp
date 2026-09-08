#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int n, arr[MAX];
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        if(arr[i]%2==0){cout<<arr[i]<<" ";}
    }
    // Please write your code here.
    return 0;
}