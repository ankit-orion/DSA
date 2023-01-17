#include<bits/stdc++.h>
using namespace std;
int majority(int arr[], int n){
  int count = 0;
  int element = 0;
  for(int i = 0; i < n; i++){
    if(count == 0){
      element = arr[i];
    }
    if(a) count += 1;
    else count -= 1;
  }
  return element;
}
int main(){
  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n;i++){
    cin >> arr[i];
  }
  cout << majority(arr, n);
}
