#include<iostream>
using namespace std;
void moveZeros(int arr[], int n){
  int temp[n];
  int k = 0;
  for(int i = 0; i < n; i++){
    if(arr[i] != 0){
      temp[k] = arr[i];
      k++;
    }
  }
while(k<n){
  temp[k] = 0;
  k++;
}
cout << "Array after moving zeros to the end " << endl;
for(int i = 0; i < n; i++){
  cout << temp[i] << " ";
}
}
int main(){
  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  moveZeros(arr, n);
  return 0;
}
