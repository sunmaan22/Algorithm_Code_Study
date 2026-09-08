#include <iostream>
using namespace std;

int main() {
    int arr[10],even_sum=0,triple_sum=0,cnt=0;
    for(int i=0;i<10;++i){
        cin>>arr[i];
        if((i+1)%2==0){
            even_sum+=arr[i];
        }
        if((i+1)%3==0){
            triple_sum+=arr[i];
            cnt++;
        }
    }
    cout<<fixed;
    cout.precision(1);
    cout<<even_sum<<" "<<(double)triple_sum/cnt;
    // Please write your code here.
    return 0;
}