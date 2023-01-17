/*My solution*/
typedef                     long long ll;
typedef                     long double lld;
typedef                     vector<ll> vl;
/*****************************************************************************/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unsigned long long int a[n];
        // another way of taking input in an array using vectotrs 
    //         ll n;
    // cin >> n;
    // vl a(n);
    // for (auto &i : a) {
    //     cin >> i;
    // }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        unsigned long long int sum;
        int i = 0;
        for (int j = 1; j < n; j++)
        {
            unsigned long long int res = a[i] * a[j];
            a[i] = res;
            a[j] = 1;
        }
        // instead of running a loop i could have added a[0] + n - 1
        /*
        reason for adding n - 1 is that because except arr[0] all the elements are 
        1 so we can add the first elements with the number of elements in the array + 1
        */
        // for (int x = 0; x < n; x++)
        // {
        //     sum += a[x];
        // }
        // cout << ans << endl;
        sum = a[0] + n - 1;
        cout << sum*2022 << endl;
    }
    return 0;
}
/*best solution*/
// void solve() {
//     ll n;
//     cin >> n;
//     vl a(n);
//     for (auto &i : a) {
//         cin >> i;
//     }
//     ll temp = a[0];
//     for (int i = 1; i < n; i++) {
//         temp = temp * a[i];
//     }
//     cout << (temp + n - 1) * 2022 << endl;
// }
 
 
// int main() {
//     cin.tie(0)->sync_with_stdio(0);
// #ifndef ONLINE_JUDGE
//     freopen("Error.txt", "w", stderr);
// #endif
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
 
//     int tc = 1;
//     cin >> tc;
//     while (tc--)
//         solve();
 
//     return 0;
// }