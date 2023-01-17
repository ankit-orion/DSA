#include<iostream>
using namespace std;
void leftRotate(int arr[], int n){
  int temp[n];
  for(int i = 1; i < n; i++){
    temp[i - 1] = arr[i];
  }
  temp[n - 1] = arr[0];
  for(int i = 0; i < n; i++){
    arr[i] = temp[i];
  }
}
int main(){
  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  leftRotate(arr, n);
  for(int i = 0; i < n; i++){
    cout << arr[i] <<" ";
  }
  return 0;
}
