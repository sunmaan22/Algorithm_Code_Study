#include <iostream>
using namespace std;

int main() {
    int n,a,sum=0;
    cin>>n;

    for(int i=1;i<=n;++i){
        cin >> a;
        if(a%2!=0&&a%3==0){
            sum += a;
        }
    }
    cout << sum;
    // Please write your code here.
    return 0;
}