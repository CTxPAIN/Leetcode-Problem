class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i=1;i<nums.size();i++){
           while(nums[i] > nums[i-1] + 1){
            if(nums[i]!=nums[i-1]+1){
                ans.push_back(nums[i-1]+1);
                nums[i-1]++;
            }
        }
        }
        return ans;
    }
};