#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int arr[MAX],target;
    for(int i=0;i<MAX;++i){
        cin>>arr[i];
        if(arr[i]==0){
            target=i;
            break;
        }
    }
    cout<<arr[target-1]+arr[target-2]+arr[target-3];
    // Please write your code here.
    return 0;
}