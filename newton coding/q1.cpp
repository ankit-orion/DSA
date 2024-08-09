#include <bits/stdc++.h>
using namespace std;

int main() {
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 + num2 > 0 && (num1 + num2) % 2 == 0) {
        cout << "YES" << endl;
    } else if (num1 + num3 > 0 && (num1 + num3) % 2 == 0) {
        cout << "YES" << endl;
    } else if (num2 + num3 > 0 && (num2 + num3) % 2 == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}