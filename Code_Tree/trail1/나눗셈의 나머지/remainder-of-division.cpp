#include <iostream>
using namespace std;

int main() {
    int a,b,temp,arr[100]={},sum=0;
    cin>>a>>b;
    while(a>1){
        temp=a%b;
        a /=b;
        arr[temp]++;
    }
    for(int i=0;i<100;++i){
        arr[i]*=arr[i];
    }
    for(int j=0;j<100;++j){
        sum += arr[j];
    }
    cout<<sum;
    // Please write your code here.
    return 0;
}