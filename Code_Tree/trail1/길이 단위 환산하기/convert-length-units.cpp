#include <iostream>
using namespace std;

double ft_to_cm(double ft){
    double changed_cm = ft*30.48;
    return changed_cm;
}

int main() {
    double ft;
    cin >> ft;
    double cm = ft_to_cm(ft);

    cout << fixed;
    cout.precision(1);

    cout << cm;

    // Please write your code here.
    return 0;
}