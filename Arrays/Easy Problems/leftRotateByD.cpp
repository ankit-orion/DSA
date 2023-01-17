#include<iostream>
using namespace std;
void reverse(int arr[], int start, int end){
  while( start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}
void leftRotateByD(int arr[], int n, int D){
  reverse(arr, 0, D - 1);
  reverse(arr, D, n - 1);
  reverse(arr, 0, n - 1);
}
int main(){
  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int D;
  cin >> D;
  leftRotateByD(arr, n, D);
  for(int i = 0; i < n; i++){
    cout << arr[i] <<" ";
  }
return 0;
}
