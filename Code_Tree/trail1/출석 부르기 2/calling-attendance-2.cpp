#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    while(1){
        cin >> n;
        if(n==1){
            cout << "John" << "\n";
        }
        else if(n==2){
            cout << "Tom" << "\n";
        }
        else if(n==3){
            cout << "Paul" << "\n";
        }
        else if(n==4){
            cout << "Sam" << "\n";
        }
        else{
            cout << "Vacancy";
            break;
        }
    }

    // Please write your code here.
    return 0;
}