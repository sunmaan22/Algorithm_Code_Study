#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int arr[MAX],n;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>arr[i];
        arr[i] *= arr[i];
    }
    for(int j=0;j<n;++j){cout<<arr[j]<<" ";}
    
    
    // Please write your code here.
    return 0;
}