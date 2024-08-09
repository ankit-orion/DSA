#include<iostream>
using namespace std;

#define MOD 1000000007

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Initialize the beauty variable
        long long beauty = 0;
        // Initialize the factorial variable
        long long factorial = 1;

        // Calculate n!
        for (int i = 1; i <= n; i++) {
            factorial = (factorial * i) % MOD;
        }

        // Calculate the beauty using the formula
        beauty = (n * factorial) % MOD;
        // Multiply by 2
        beauty = (beauty * 2) % MOD;

        cout << beauty << endl;
    }

    return 0;
}