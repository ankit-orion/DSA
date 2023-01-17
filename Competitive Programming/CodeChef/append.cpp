#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n, y;
        cin >> n >> y;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int ans = arr[0];
        for (int i = 1; i < n; i++)
        {
            ans |= arr[i];
        }
        int x = y - ans;
        if ((x&y) == x) cout << x << endl;
        else cout << "-1" << endl;
    }
    return 0;
}