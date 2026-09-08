#include <iostream>
using namespace std;

int main() {
    char a;
    int temp,arr[4]={};
    for(int i=1;i<=3;++i){
        cin>>a>>temp;
        if(a=='Y'){
            if(temp>=37){
                arr[0]++;
            }
            else{
                arr[2]++;
            }
        }
        else{
            if(temp>=37){
                arr[1]++;
            }
            else{
                arr[3]++;
            }
        }
    }
    for(int j=0;j<4;++j){
        cout<<arr[j]<<" ";
    }
    if(arr[0]>=2){
        cout<<'E';
    }

    // Please write your code here.
    return 0;
}