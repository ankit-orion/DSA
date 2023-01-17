#include<iostream>
using namespace std;
vector<int> twoSum(vector<int>&nums, int target){
  vector<int> res;
for(int i = 0; i < nums.size(); ++i){
  for(int j = i + 1; j < nums.size(); ++j){
    if(nums[i] + nums[j] == target){
      res.emplace_back(i);
      res.emplace_back(j);
      break;
    }
  }
  if(res.size() == 2)
  break;
}
return res;
}
int main(){
  int n;
  cin >> n;
  vector<int> arr;
  int input;
  for(int i = 0; i < n; i++){
    cin >> input;
    arr.push_back(input);
  }
  vector<int>ans = twoSum(arr);
}
