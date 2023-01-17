#include <iostream>
using namespace std;
int main()
{
    int n, i, j, k;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == 0)
                cout << "*"
                     << " ";
            else if (j == 0)
            {
                cout << endl;
                cout << "*"
                     << " ";
            }
            if (i >= n - 1 && j >= 1)
            {
                cout << "*"
                     << " ";
            }
            for (k = 0; k < n + 3; k++)
            {
                if (i > 0 && i < n - 1)
                {
                    cout << "1";
                }
                else
                    {
                        break;
                    }
            }
        }
    }
}
return 0;
}