#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    int count = 0;
    while (t--)
    {
        while (n % 2 == 0)
        {
            count++;
            n = n / 2;
        }
        for (int i = 3; i <= sqrt(n); i = i + 2)
        {
            while (n % i == 0)
            {
                n = n / i;
            }
        }
        if (count % 2 == 0)
        {
            cout << '1' << endl;
        }
        else
        {
            cout << '0' << endl;
        }
    }
    return 0;
}
