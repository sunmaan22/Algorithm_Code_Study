#include <iostream>

using namespace std;

int N,fst,scd;
int A[100];

int main() {
    cin >> N >> A[0] >>A[1];
    if(A[0]>=A[1]){
        fst = A[0];
        scd = A[1];
    }
    else{
        fst = A[1];
        scd = A[0];
    }

    for (int i = 2; i < N; i++) {
        cin >> A[i];
        if(A[i]>=fst){
            scd = fst;
            fst = A[i];
            
        }
        else if(A[i]>=scd){
            scd=A[i];
        }
    }
    cout<<fst<<" "<<scd;

    // Please write your code here.

    return 0;
}
