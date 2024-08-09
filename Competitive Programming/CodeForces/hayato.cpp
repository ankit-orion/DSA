#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) % 2 != 0)
                {
                    cout << "YES\n" <<i+1<<" "<<j+1<<" "<<k+1<<"\n";
                    return;
                }
            }
        }
    }
    cout <<"NO" << endl;
}
int main()
{
        cin.tie(0)->sync_with_stdio(0);
    #ifndef ONLINE_JUDGE
        freopen("Error.txt", "w", stderr);
    #endif
    #ifndef ONLINE_JUDGE
        freopen("input.in", "r", stdin);
        freopen("output.in", "w", stdout);
    #endif
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         int a[n];
//         int odd_count = 0;
//         for (int i = 0; i < n; i++) {
//             cin >> a[i];
//             if (a[i] % 2 != 0) {
//                 odd_count++;
//             }
//         }

//         if (odd_count >= 2) {
//             cout << "YES" << endl;
//             for (int i = 0; i < n && odd_count >= 2; i++) {
//                 if (a[i] % 2 != 0) {
//                     cout << i+1 << " ";
//                     odd_count--;
//                 }
//             }
//             cout << endl;
//         }
//         else {
//             cout << "NO" << endl;
//         }
//     }

//     return 0;
// }