#include <iostream>
using namespace std;

int main() {
    int a,b,c,temp,i;
    cin >> a >> b >> c;

    while(1){
        temp = c*i;
        i++;
        if(temp>=a&&temp<=b){
            cout << "YES";
            break;
        }
        if(temp>b){
            cout << "NO" ;
            break;
        }

    }

    // Please write your code here.
    return 0;
}