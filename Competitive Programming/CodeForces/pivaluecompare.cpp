#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int count = 0;
    string s1 = "314159265358979323846264338327950288
419716939937510582";
    while (t--)
    {
        string s2;
        cin >> s2;
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == s2[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }
        cout << count << endl;
    }
    // string s2;
    return 0;
}