#include <iostream>
using namespace std;

int main() {
    int a,b,sum=0;
    cin >> a >> b;
    if(a<b){
        for(int i = a;i<=b;++i){
            if(i%5==0){
            sum +=i;
            }

        }
    }
    else if(a>b){
        for(int i = b;i<=a;++i){
            if(i%5==0){
                sum+=i;
            }
        }
    }
    else{
        if(a%5==0){
            sum = a;
        }
    }
    cout << sum;
    // Please write your code here.
    return 0;
}