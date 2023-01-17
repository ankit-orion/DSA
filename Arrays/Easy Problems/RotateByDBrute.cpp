#include <iostream>
using namespace std;
rotateByD(int arr[], int n, int k)
{
  int temp[n];
  for (int i = 0; i < k; i++)
  {
    temp[i] = arr[i];
  }
  for (int i = k; i < n; i++)
  {
    arr[]
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
  int k;
  cin >> k;
  leftRotate(arr, n, k);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
