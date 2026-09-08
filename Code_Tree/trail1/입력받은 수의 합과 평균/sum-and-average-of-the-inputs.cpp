#include <iostream>
using namespace std;

int main() {
    int n,a,sum=0,cnt=0;
    cin >> n;
    for(int i=0;i<n;++i){
        cin >> a;
        sum += a;
        cnt ++;
    }

    cout << fixed;
    cout.precision(1);
    cout << sum << " " << (double)sum/cnt;
    // Please write your code here.
    return 0;
}