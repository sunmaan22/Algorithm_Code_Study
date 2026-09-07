#include <iostream>
using namespace std;

int main() {
    int arr[100],n,max_val,min_val,cnt=1;
    cin>>n;
    max_val=n, min_val=n, arr[0]=n;
    while(cin>>n){
        if(n==999||n==-999){
            break;
        }
        arr[cnt]=n;
        if(max_val<n){
            max_val=n;
        }
        if(min_val>n){
            min_val=n;
        }
        cnt++;
    }
    cout<<max_val<<" "<<min_val;
    // Please write your code here.
    return 0;
}