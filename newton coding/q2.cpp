#include <bits/stdc++.h>
using namespace std;

bool check(long long n, long long l, long long s) {
    long long sum = (l * (l + 1)) / 2;
    if (s > sum || s < l) {
        return false;
    }
    if (sum - s <= n - l) {
        return true;
    }
    if (l > 1 && s == sum - 1) {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, l, s;
        cin >> n >> l >> s;
        if (check(n, l, s)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}