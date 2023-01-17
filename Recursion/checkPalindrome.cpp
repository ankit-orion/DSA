#include <iostream>
using namespace std;
bool checkpalindrome(int i, int arr[], int n)
{
    if(i >= n/2) return true;
    if(arr[i] != arr[n - i - 1]) return false;
    checkpalindrome(i+ 1, arr, n);
}
int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << checkpalindrome(0, arr, n);
}