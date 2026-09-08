#include <iostream>
using namespace std;

int main() {
    int arr[10], cnt1=0,cnt2=0,sum=0;
    for(int i=0;i<10;++i){
        cin>>arr[i];
        if(arr[i]==0)break;
        cnt1++;
    }
    for(int j=0;j<cnt1;++j){
        if(arr[j]%2==0){
            cnt2++;
            sum+=arr[j];
        }
    }
    cout<<cnt2<<" "<<sum;
    // Please write your code here.
    return 0;
}