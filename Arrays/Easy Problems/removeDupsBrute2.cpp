// time complexity O(n*log(n) + O(n))
// space complexity O(n)
#include<bits/stdc++.h>
using namespace std;
int remDups(int arr[], int n){
  set<int> set;
  for(int i = 0; i < n; i++){
    set.insert(arr[i]);
  }
  int k = set.size();
  int j = 0;
  for(int x: set){
    arr[j++] = x;
  }
  return k;
}
int main(){
  int n;
  cin >> n;
  int arr[100];
  for(int i = 0; i < n; i++){
    cin >> arr[i];
  }
  int k = remDups(arr, n);
 cout << "The array after removing duplicate elements is " << endl;
 for (int i = 0; i < k; i++) {
   cout << arr[i] << " ";

}
