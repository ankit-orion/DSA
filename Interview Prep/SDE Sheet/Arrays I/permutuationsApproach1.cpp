//! Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.
//! Example 1:

//! Input: nums = [1,2,3]
//! Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
//! Example 2:

class Solution {
    private:
    void permutations(vector<int> &ds, vector<int> &nums, vector<vector<int>> &ans, int freq[]){
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }
        for(int i = 0; i < nums.size(); i++){
            if(!freq[i]){
                ds.push_back(nums[i]);
                freq[i] = 1;
                permutations(ds, nums, ans, freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i = 0; i < nums.size(); i++){
            freq[i] = 0;
        }
        permutations(ds, nums, ans, freq);
        return ans;
    }
};