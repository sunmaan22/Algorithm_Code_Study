#include <iostream>
using namespace std;

int square(int N){
    int a = N*N;
    return a;
}

int main() {
    int N;
    cin >> N;
    int a = square(N);
    cout<<a<<endl;
    if(N<5){
        cout<<"tiny";
    }
    // Please write your code here.
    return 0;
}