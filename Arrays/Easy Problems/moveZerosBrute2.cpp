#include <iostream>
using namespace std;
moveZeros(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
      for (int j = i + 1; j < n; j++)
      {
        if (arr[j] != 0)
        {
          swap(arr[i], arr[j]);
        }
      }
  }
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
  moveZeros(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
