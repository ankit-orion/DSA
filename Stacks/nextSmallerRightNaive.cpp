#include <iostream>
using namespace std;
void solve(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                arr[i] = arr[j];
                break;
            }
        }
        if (j == n)
        {
            arr[i] = -1;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    solve(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}