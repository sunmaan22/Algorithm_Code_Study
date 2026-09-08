#include <iostream>
using namespace std;

char is_emergency(char a, int b){
    if(a=='Y'){
        if(b>=37){
            return 'A';
        }
        else{
            return 'C';
        }
    }
    else{
        if(b>=37){
            return 'B';
        }
        else{
            return 'D';
        }
    }
}


int main() {
    int a,b,c;
    char a1,b1,c1,d1,d2,d3;
    int count =0;
    cin >> a1 >> a >> b1 >> b >> c1 >> c;
    d1 = is_emergency(a1,a);
    d2 = is_emergency(b1,b);
    d3 = is_emergency(c1,c);

    if(d1=='A'){
        count += 1;
    }
    if(d2=='A'){
        count += 1;
    }
    if(d3=='A'){
        count += 1;
    }
    if(count>=2){
        cout << "E";
    }
    else{
        cout << "N";
    }

    // Please write your code here.
    return 0;
}

/*
#include <iostream>
using namespace std;

// 작성하셨던 is_emergency 함수
char is_emergency(char a, int b) {
    if (a == 'Y' && b >= 37) return 'A';
    else if (a == 'N' && b >= 37) return 'B';
    else if (a == 'Y' && b < 37) return 'C';
    else return 'D';
}

int main() {
    int count = 0;

    // 3번 반복하는 for문
    for (int i = 0; i < 3; i++) {
        char symptom;
        int temp;
        
        // 한 명씩 차례대로 입력받음
        cin >> symptom >> temp;
        
        // 입력받자마자 바로 A인지 확인하고 count 증가
        if (is_emergency(symptom, temp) == 'A') {
            count++;
        }
    }

    // 이후 count 값에 따라 E 또는 N 출력 (문제 조건에 맞게)
    if (count >= 2) {
        cout << "E";
    } else {
        cout << "N";
    }

    return 0;
}
*/