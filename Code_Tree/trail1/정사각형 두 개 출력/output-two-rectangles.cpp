#include <iostream>
using namespace std;

void print_square(int n){
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;

    print_square(n);
    cout << endl;
    print_square(n);
    // Please write your code here.
    return 0;
}