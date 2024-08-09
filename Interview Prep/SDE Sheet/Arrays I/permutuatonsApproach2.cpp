class permutuatonsApproach2
{
private:
    void permuteRecur(int index, vector<vector<int>> &ans, vector<int> &nums)
    {
        if (index == nums.size())
        {
            ans.push_back(nums);
        }
        for (int i = index; i < nums.size(); i++)
        {
            swap(nums[index], nums[i]);
            permuteRecur(index + 1, ans, nums);
            swap(nums[index], nums[i]);
        }
    }

public:
    vector<vector<int> int> permute(vector<int> nums)
    {
        vector<vector<int>> ans;
        permuteRecur(0, ans, nums);
        return ans;
    }
};

// time complexity will be O(n!.n)
//Space complexity O(1);