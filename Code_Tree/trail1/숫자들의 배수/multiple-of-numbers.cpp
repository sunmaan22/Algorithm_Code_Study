#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int n,x=1,cnt=0;
    cin>>n;
    while(cnt<2){
        cout<<n*x<<" ";
        if((n*x)%5==0){cnt++;}
        x++;        
    }
    // Please write your code here.
    return 0;
}