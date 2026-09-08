#include <iostream>

using namespace std;

int N;
int A[100],min_val,cnt=1;

int main() {
    cin >> N;
    cin>>A[0];
    min_val=A[0];
    for (int i = 1; i < N; i++) {
        cin >> A[i];
        if(min_val>A[i]){
            min_val=A[i];
            cnt=1;
        }
        else if(min_val==A[i]){
            cnt++;
        }
    }
    cout<<min_val<<" "<<cnt;

    // Please write your code here.

    return 0;
}
