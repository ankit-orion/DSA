// The problem requires us to generate all unique permutations of a given input array nums, where each element of nums may be repeated any number of times. To generate these permutations, we can use a backtracking approach.

// The basic idea behind backtracking is to build a solution incrementally, one element at a time, and backtrack when we encounter a dead end or have completed the solution. In the context of generating permutations, we start with an empty permutation, and at each step, we add one element from nums to the permutation. We continue this process until we have added all the elements of nums to the permutation, at which point we have generated a new permutation.

// To avoid generating duplicate permutations, we need to ensure that we do not add the same element to the permutation more than once. To achieve this, we can sort the input array nums and skip adding an element if it is equal to the previous element and has not been used in the current permutation. This ensures that we add each element of nums to the permutation only once, even if there are duplicates.

// Here's the high-level algorithm:

// Sort the input array nums.
// Initialize an empty vector ans to store the generated permutations.
// Define a recursive function permuteRecur that takes the current index index, the ans vector, and the current permutation curPerm as inputs.
// If the length of curPerm is equal to the length of nums, append curPerm to ans and return.
// Initialize a variable prev to a value that is not present in nums.
// Loop over the elements of nums starting at index index.
// If the current element nums[i] is equal to prev, skip it.
// Add the current element nums[i] to curPerm.
// Recursively call permuteRecur with the updated index, ans, and curPerm.
// Remove the last element of curPerm.
// Set prev to the current element nums[i].
// Return ans.
// And here's the implementation:


class Solution {
private:
    void permuteRecur(int index, vector<vector<int>> &ans, vector<int> &nums) {
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }
        unordered_set<int> used;
        for (int i = index; i < nums.size(); i++) {
            if (used.find(nums[i]) != used.end()) {
                continue;
            }
            used.insert(nums[i]);
            swap(nums[index], nums[i]);
            permuteRecur(index + 1, ans, nums);
            swap(nums[index], nums[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        permuteRecur(0, ans, nums);
        return ans;
    }
};
