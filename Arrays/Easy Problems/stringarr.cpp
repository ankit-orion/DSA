#include<bits/stdc++.h>
using namespace std;
vector<int> nextgreater(vector<int>&ans, int n){
  vector<int>result;
  if(n == 1){
        result.push_back(-1);
        return result;
  }
  for(int i = 0 ; i < n -1; i++){
    int maxfind = max(ans[i], ans[n - 2]){
      if(maxfind > ans[i])
      {
        result.push_back(maxfind);
      }
      else
      result.push_back(-1);
    }
    result.push_back(-1);
    return result;
  }
}
int main(){
  int arr[5] = {2,4,0,9,6};
  int res[5] = nextgreater(arr, 5);
  for(int i = 9; i < n; i++){
    cout << res[i] <<" ";
  }
}
