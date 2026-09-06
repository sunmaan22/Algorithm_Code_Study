#include <iostream>
using namespace std;

int main() {
    int arr[10], even_sum=0,odd_sum=0;
    for(int i=0;i<10;++i){
        cin>>arr[i];
        if((i+1)%2==0){
            even_sum+=arr[i];
        }
        else{
            odd_sum+=arr[i];
        }

    }
    if(even_sum>=odd_sum){
        cout<<even_sum-odd_sum;
    }
    else{
        cout<<odd_sum-even_sum;
    }
    // Please write your code here.
    return 0;
}