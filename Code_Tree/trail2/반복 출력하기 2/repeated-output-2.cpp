#include <iostream>

using namespace std;

int N;

void hello(int N){
    if(N == 0){
        return;
    }
    hello(N-1);
    cout << "HelloWorld"<<endl;
    ;

}

int main() {
    cin >> N;
    hello(N);

    // Please write your code here.

    return 0;
}