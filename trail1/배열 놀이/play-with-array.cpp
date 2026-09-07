#include <iostream>
#define MAX 100
using namespace std;


int main() {
    int n,q,a,b,c,idx=-1,arr[MAX]={};
    cin>>n>>q;//n,q를 받음

    for(int i=0;i<n;++i){
        cin>>arr[i];//다음줄의 원소들을 배열에 넣음
    }

    for(int j=0;j<q;++j){
        cin>>a;
        if(a==1){
            cin>>b;
            cout<<arr[b-1]<<endl;
        }
        else if(a==2){
            cin>>b;
            idx=-1;
            for(int k=0;k<n;++k){
                if(arr[k]==b){
                    idx=k+1;
                    break;
                }
            }
            if(idx==-1){
                cout<<0<<endl;
            }
            else{
                cout<<idx<<endl;
            }
        }
        else if(a==3){
            cin>>b>>c;
            for(int l=b;l<=c;++l){
                cout<<arr[l-1]<<" ";
            }
            cout<<endl;
        }
    }

    // Please write your code here.
    return 0;
}