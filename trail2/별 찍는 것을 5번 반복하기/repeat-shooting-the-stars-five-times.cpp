#include <iostream>
using namespace std;

void draw_stars(){
    for(int i=0;i<10;++i){
        cout<<"*";
    }
}
int main() {
    for(int i=0;i<5;++i){
        draw_stars();
        cout<<endl;
    }
    // Please write your code here.
    return 0;
}