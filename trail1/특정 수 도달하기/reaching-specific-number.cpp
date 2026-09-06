#include <iostream>
using namespace std;

int main() {
    int arr[10],sum=0,cnt=0;
    for(int i=0;i<10;++i){
        cin >> arr[i];
        sum += arr[i];
        cnt++;
        if(arr[i]>=250){
            sum-=arr[i];
            cnt--;
            break;

        }
    }
    cout << fixed;
    cout.precision(1);
    cout<<sum<<" "<<(double)sum/cnt;
    // Please write your code here.
    return 0;
}