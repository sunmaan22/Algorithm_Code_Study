#include <iostream>
using namespace std;

char grade(int score){
    if(score>=90){
        return 'A';
    }
    else if(score>=80){
        return 'B';
    }
    else if(score>=70){
        return 'C';
    }
    else if(score>=60){
        return 'D';
    }
    else{
        return 'F';
    }
}

int main() {
    int n;
    char g;
    cin >> n;

    for(int i=n;i<=100;++i){
        g = grade(i);
        cout << g << " ";
    }
    // Please write your code here.
    return 0;
}