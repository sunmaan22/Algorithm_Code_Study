#include <iostream>
using namespace std;

int main() {
    int n,cnt1=0,cnt2=0,cnt3=0;
    cin >> n;
    for(int i=1;i<=n;++i){
   
        if(i%12==0){
            cnt3++;
        }
        else if(i%3==0){
            cnt2++;
        }
        else if(i%2==0){
            cnt1++;
        }
        else{

        }
    }
    cout <<cnt1<<" "<<cnt2<<" "<<cnt3;
    // Please write your code here.
    return 0;
}