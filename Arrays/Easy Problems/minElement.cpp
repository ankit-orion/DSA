#include <iostream>
using namespace std;
int min(int arr[], int n)
{
  int min = arr[0];
  for (int i = 0; i < n; i++)
  {
    if (min > arr[i])
    {
      min = arr[i];
    }
  }
  return min;
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
  cout << min(arr, n);
  return 0;
}
