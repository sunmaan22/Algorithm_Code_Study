#include <iostream>
using namespace std;

int main() {
    int n;
    bool mix_num=false;
    cin >> n;
    for(int i=2;i<=n-1;++i){
        if(n%i==0){
            mix_num = true;
            break;
        }
    }
    if(mix_num == true){
        cout << "C";
    }
    else{
        cout << "N";
    }
    // Please write your code here.
    return 0;
}