// using max variable
#include<bits/stdc++.h>
using namespace std;
int largest(vector<int> arr){
  int max = arr[0];
  for(int i = 0; i < arr.size();i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  return max;
}
int main(){
  vector<int> arr;
  int n;
  cin >> n;
  int input;
  for(int i =0; i < n; i++){
    cin >> input;
    arr.push_back(input);
  }
  cout << "largest element in the array is "<< largest(arr) << endl;

}
