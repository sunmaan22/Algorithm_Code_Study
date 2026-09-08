#include <iostream>
using namespace std;

double bmi(double h, double w){
    int b = (10000*w)/(h*h);
    return b;
}
int main() {
    double h,w;
    cin >> h >> w;

    int b = bmi(h,w);

    cout<<b<<endl;

    if(b>=25){
        cout<<"Obesity";
    }
    // Please write your code here.
    return 0;
}