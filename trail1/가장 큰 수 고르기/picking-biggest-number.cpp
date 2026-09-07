#include <iostream>
using namespace std;

int main() {
    int arr[10], max_val=0;
    for(int i=0;i<10;++i){
        cin>>arr[i];
        if(max_val<=arr[i]){
            max_val=arr[i];
        }
    }
    cout<<max_val;
    // Please write your code here.
    return 0;
}