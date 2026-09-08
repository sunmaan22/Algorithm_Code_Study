#include <iostream>
using namespace std;

int main() {
    int a,n;
    cin >> n;

    for(int i = 1;i<=n;++i){
        cin>>a;
        if(a%2!=0&&a%3==0){
            cout << a << endl;
        }
    }
    // Please write your code here.
    return 0;
}