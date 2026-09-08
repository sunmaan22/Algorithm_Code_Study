#include <iostream>
using namespace std;

int main() {
    int arr[4][4], sum=0;
    for(int i=0;i<4;++i){
        for(int j=0;j<4;++j){
            cin>>arr[i][j];
            if(j<=i){
                sum += arr[i][j];
            }
        }
    }
    cout<<sum;
    // Please write your code here.
    return 0;
}