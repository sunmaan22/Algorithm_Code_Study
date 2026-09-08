#include <iostream>
using namespace std;

int is_ttt(int n){
    if(n%3==0){
        return 0;
    }
    else if(n/10==3||n/10==6||n/10==9||n%10==3||n%10==6||n%10==9){
        return 0;
    }
    else{
        return n;
    }
}

int main() {
    int n;
    cin >> n;

    for(int i=1;i<=n;++i){
        cout << is_ttt(i) << " ";
    }

    // Please write your code here.
    return 0;
}