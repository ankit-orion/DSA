#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int d, l, r;
        cin >> d >> l >> r;
        if (d < l)
            cout << "Too ealry" << endl;
        else if (d > r)
            cout << "Too late" << endl;
        else if (d >= l && d <= r)
            cout << "Take second dose now" << endl;
    }
    return 0;
}