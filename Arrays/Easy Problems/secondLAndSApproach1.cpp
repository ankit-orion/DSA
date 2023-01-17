// find second largest and second smallest in an sorted_array
// approach 1 : brute force approach
// time complexity is O(NlogN) fro sorting the array
// space complexity is O(1)
#include<bits/stdc++.h>
using namespace std;
void getElements(int arr[], int n){
  if(n == 0 || n == 1)
  cout << -1 << " " << -1 << endl;
  sort(arr, arr+n);
  int small = arr[1];
  int large = arr[n - 2];
  cout << "seocnd smallest " << small << endl;
  cout <<"second largest " << large << endl;
 }
int main(){
  int arr[] = {2,4,7,1,7,8};
  int n = sizeof(arr)/sizeof(arr[0]);
  getElements(arr, n);
}
