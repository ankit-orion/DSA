#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int b[n];
        int streak = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 0 || b[i] == 0)
            {
                continue;
            }
            else if(a[i] >= 1 && b[i] >= 1)
            {
                streak += 1;
            }
        }
        cout << streak << endl;
    }
    return 0;
}
