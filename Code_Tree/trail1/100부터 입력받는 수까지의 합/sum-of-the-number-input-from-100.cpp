#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    cin >> n;

    for(int i=n;i<=100;++i){
        sum += i;
    }
    cout << sum;
    // Please write your code here.
    return 0;
}