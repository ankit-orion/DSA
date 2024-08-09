#include <iostream>
using namespace std;
int main()
{
    int arr[6][6];
    int i, j, res;
    for (i = 1; i < 6; i++)
    {
        for (j = 1; j < 6; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 1; i < 6; i++)
    {
        for (j = 1; j < 6; j++)
        {
            if (arr[i][j] == 1)
            {
                break;
            }
        }
    }
    if(j>= 3){
        cout << (j-3)+(3-i);
    }
    else{
        cout << (3-i) + (3-j);
    }
    return 0;
}