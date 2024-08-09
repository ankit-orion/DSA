#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
long long t, n;
long long dp[1000005][4];

long long add(long long a, long long b) {
  return (a + b) % mod;
}

int main() {
  cin >> t;
  dp[0][0] = 1;
  dp[1][1] = 1;
  dp[1][2] = 2;
  for (int i = 2; i <= 1000005; i++) {
    dp[i][0] = add(dp[i - 1][1], dp[i - 1][2]);
    dp[i][1] = add(dp[i - 1][0], dp[i - 1][2]);
    dp[i][2] = add(dp[i - 1][0], add(dp[i - 1][1], dp[i - 1][2]));
  }
  while (t--) {
    cin >> n;
    cout << dp[n][2] << endl;
  }
  return 0;
}