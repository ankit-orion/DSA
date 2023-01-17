#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        // a current worth
        // b to become the richest
        // x billion dollars increased per year
        int a, b, x;
        cin >> a >> b >> x;
        int toBeRich = (b - a);
        int time = toBeRich / x;
        cout << time << endl;
    }
    return 0;
}
