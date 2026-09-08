#include <iostream>
using namespace std;

int main() {
    int n,cnt=0;
    cin >> n;

    while(n>1){
        cnt++;
        n /= cnt;
    }
    cout << cnt;
    // Please write your code here.
    return 0;
}