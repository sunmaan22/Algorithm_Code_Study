#include <iostream>
using namespace std;

int main() {
    int idx=-1;
    char arr[6]={'L','E','B','R','O','S'},a;
    cin>>a;
    for(int i=0;i<6;++i){
        if(a==arr[i]){
            idx=i;
        }


    }
    if(idx==-1){
        cout<<"None";
    }
    else{cout<<idx;}
    // Please write your code here.
    return 0;
}