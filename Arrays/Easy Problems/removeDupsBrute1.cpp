//time complexity of this solution is O(n)
// space complexity will be O(n) too
#include<vector>
#include<iostream>
#include<cmath>
using namespace std;
int remDups(int arr[], int n){
  if(n == 0)
  return 0;

  int temp[n];
  temp[0] = arr[0];
  int res = 1;
  for(int i = 1; i < n; i++){
    if(temp[res - 1] != arr[i])
    {
      temp[res] = arr[i];
      res++;
    }
  }
  for(int i = 0; i < res; i++){
    arr[i] = temp[i];
  }
  return res;
}
int main(){
  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  n = remDups(arr, n);
  cout << "Array after removing duplicate elements " << endl;
  for(int i = 0; i < n; i++){
    cout << arr[i] << " ";
  }
  return 0;
}
