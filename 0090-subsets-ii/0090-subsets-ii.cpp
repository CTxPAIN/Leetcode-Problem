class Solution {
public:
    void helper(vector<vector<int>>& result, vector<int>& ans, vector<int>& nums, int idx) {
        // result.push_back(ans);
        
        // for (int i = idx; i < nums.size(); i++) {
        //     if (i > idx && nums[i] == nums[i - 1]) {
        //         continue;
        //     }
        //     ans.push_back(nums[i]);
        //     helper(result, ans, nums, i + 1);
        //     ans.pop_back();
        // }


        if(idx==nums.size()){
            result.push_back(ans);
            return;
        }

        ans.push_back(nums[idx]);
        helper(result,ans,nums,idx+1);
        ans.pop_back();
        while(idx+1<nums.size()&&nums[idx]==nums[idx+1]){
            idx++;
        }
        helper(result,ans,nums,idx+1);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> ans;
        helper(result, ans, nums, 0);
        return result;
    }
};