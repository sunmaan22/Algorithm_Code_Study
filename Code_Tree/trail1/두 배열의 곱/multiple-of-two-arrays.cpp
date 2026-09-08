#include <iostream>
using namespace std;

int arr1[3][3]={},arr2[3][3]={};

void get_arr(int arr[3][3]){
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
                cin>>arr[i][j];
        }
    }
}


int main() {
    
    get_arr(arr1);
    get_arr(arr2);
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            cout << arr1[i][j]*arr2[i][j]<< " ";
        }
        cout<<endl;
    }
     
    // Please write your code here.
    return 0;
}