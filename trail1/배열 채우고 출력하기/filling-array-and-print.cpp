#include <iostream>
using namespace std;

int main() {
    char arr[10];
    for(int i=0;i<10;++i){
        cin >> arr[i];
    }
    for(int j=9;j>=0;--j){
        cout << arr[j];
    }
    // Please write your code here.
    return 0;
}