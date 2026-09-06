#include <iostream>
#define MAX_VALUE 5
using namespace std;

int main() {
    int n;
    double arr[MAX_VALUE],sum=0;
    cin>>n;

    for(int i=0;i<n;++i){
        cin >> arr[i];
        sum += arr[i];
    }
    double avg = (double)sum/n;
    cout<<fixed;
    cout.precision(1);
    if(avg>=4.0){
        cout << avg <<endl<<"Perfect";
    }
    else if(avg>=3.0){
        cout<<avg<<endl<<"Good";
    }
    else{
        cout<<avg<<endl<<"Poor";
    }
    // Please write your code here.
    return 0;
}