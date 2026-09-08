#include <iostream>
#define MAX 100
using namespace std;

int main() {
    int a,b,arr_a[MAX]={},arr_b[MAX]={},idx[MAX]={},cnt=0,num=0,target,z=0;
    bool yn =true;
    cin>>a>>b;
    for(int i=0;i<a;++i){
        cin>>arr_a[i];
    }
    for(int j=0;j<b;++j){
        cin>>arr_b[j];
    }
    for(int k=0;k<a;++k){
        if(arr_a[k]==arr_b[0]){
            idx[num]=k;
            cnt++;
            num++;
        }
    }
    //cnt번 돌려봐야함 이 뒤에는 arr_b의 마지막idx까지 arr_a와 비교해서 같은가 판단
    for(int l=0;l<cnt;++l){
        target=idx[l];
        z=0;
        yn=true;
        for(int m=target;m<b+target;++m){
            if(arr_a[m]!=arr_b[z]){
                yn= false;
                break;
            }
            z++;
        }
        if(yn==true){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    return 0;
}