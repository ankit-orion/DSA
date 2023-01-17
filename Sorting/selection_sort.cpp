#include<iostream>
using namespace std;
void sorted_array(int arr[], int n){
  for(int i = 0; i < n; i++){
    cout << arr[i] <<" ";
  }
}
void selection_sort(int arr[], int n){
  for(int i = 0; i < n -1; i++){
    int min = i;
    for(int j = i + 1; j < n; j++){
      if(arr[j] < arr[min]){
        min = j;
      }
    }
    int temp = arr[min];
    arr[min] = arr[i];
    arr[i] = temp;
  }
}
int main(){
  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  selection_sort(arr, n);
  sorted_array(arr, n);
  return 0;
}
