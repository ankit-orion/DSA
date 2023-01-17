#include<bits/stdc++.h>
using namespace std;
int majority(int arr[], int n){
  unordered_map<int, int> map;
  for(int i = 0; i < n; i++){
    map[arr[i]]++;
  }
    for(auto x : map){
      if(x.second > n/2){
        return x.first;
      }
    }
    return -1;
}
int main(){
  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  cout << majority(arr, n);
}
