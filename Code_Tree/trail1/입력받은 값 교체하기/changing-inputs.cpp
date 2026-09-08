#include <iostream>
using namespace std;

int main() {
    int a,b,temp;
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;

    cout << a << " "<< b;

    // Please write your code here.
    return 0;
}