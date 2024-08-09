#include <bits/stdc++.h>
using namespace std;
int findValue(int A[], int n)
{
    int mx1 = INT_MIN;
    int mn1 = INT_MAX;

    int mn2 = INT_MAX;
    int mx2 = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        mx1 = max(mx1, A[i] + i);
        mn1 = min(mn1, A[i] + i);

        mx2 = max(mx2, A[i] - i);
        mn2 = min(mn2, A[i] - i);
    }
    int res = 0;
    res = max(res,mx1-mn1);
    res = max(res, mx2 - mn2);
    return res;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << findValue(arr, n) << endl;
    }
    return 0;
}
