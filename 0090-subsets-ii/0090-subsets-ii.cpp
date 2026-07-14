// 

class Solution {
public:
    void helper(vector<vector<int>>& result, vector<int>& ans, vector<int>& nums, int idx) {
        // Every state we reach is a valid subset, so we add it immediately
        result.push_back(ans);
        
        for (int i = idx; i < nums.size(); i++) {
            // If the current element is a duplicate of the previous element 
            // *at this specific depth level*, skip it to avoid duplicate subsets.
            if (i > idx && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Include the current element
            ans.push_back(nums[i]);
            
            // Move deeper into the recursion tree
            helper(result, ans, nums, i + 1);
            
            // Backtrack: remove the element to try other combinations
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // Crucial: brings duplicates together
        vector<vector<int>> result;
        vector<int> ans;
        helper(result, ans, nums, 0);
        return result;
    }
};