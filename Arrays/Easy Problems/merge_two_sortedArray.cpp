#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int> &arr1, vector<int> &arr2)
{
  vector<int> arr3;
  int n = arr1.size();
  int m = arr2.size();
  int i = 0, j = 0;
  while (i < n && j < m)
  {
    if (arr1[i] < arr2[j])
    {
      arr3.push_back(arr1[i]);
      i++;
    }
    else
    {
      arr3.push_back(arr2[j]);
      j++;
    }
  }
  while (i < n)
  {
    arr3.push_back(arr1[i]);
    i++;
  }
  while (j < m)
  {
    arr3.push_back(arr2[j]);
  }
  return arr3;
}
int main()
{
  vector<int> arr1;
  vector<int> arr2;
  for (int i = 1; i <= 5; i++)
  {
    arr1.push_back(2 * i);
  }
  for (int i = 1; i <= 5; i++)
  {
    arr2.push_back(2 * i - 1);
  }
  vector<int> arr3 = merge(arr1, arr2);
  for (int i = 0; i < arr3.size(); i++)
  {
    cout << arr3[i] << " ";
  }
  return 0;
}
