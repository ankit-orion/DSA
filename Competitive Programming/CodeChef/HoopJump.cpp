// since n will always be even so each player will jump 
// n/ 2 timses and here will be one place left
// so either one of them will jump on that place
// hence toltal jups will be equal to n/2 + 1
#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = n / 2;
        cout << ans + 1 << endl;
    }
    return 0;
}