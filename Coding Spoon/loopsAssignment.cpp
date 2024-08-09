#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int count = 0;
    for (int i = 1; count < n1; i++)
    {
        if ((9 * i + 7) % n2 != 0)
        {
            cout << 9 * i + 7 << " ";
            count++;
        }
    }
    return 0;
}