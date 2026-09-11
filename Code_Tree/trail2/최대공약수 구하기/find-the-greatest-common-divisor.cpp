#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

int max_div(int n, int m) {
    // 두 수 중 작은 값부터 시작하여 1씩 감소
    for (int i = min(n, m); i >= 1; i--) {
        if (n % i == 0 && m % i == 0) {
            return i;
        }
    }
    return 1;
}

int main() {
    cin >> n >> m;
    cout << max_div(n, m);
    return 0;
}