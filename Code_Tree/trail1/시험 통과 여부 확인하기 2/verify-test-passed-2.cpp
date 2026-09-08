#include <iostream>
using namespace std;

int main() {
    int n,arr[4],sum=0,cnt=0;
    cin>>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<4;++j){
            cin>>arr[j];
            sum+=arr[j];
        }
        if((double)sum/4>=60){
        cout<<"pass"<<endl;
        cnt++;
        sum =0;
        }
        else{
            cout<<"fail"<<endl;
            sum=0;
            }

    }
    cout<<cnt;
    // Please write your code here.
    return 0;
}