class Solution {
public:

// time complexity is  O(nlogn)
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=0;
        long long sum=0;
        int ans=1;
      for(int right=0;right<nums.size();right++){
        sum+=nums[right];
        long long target=nums[right];
        while(target*(right-i+1)-sum>k){
            sum-=nums[i];
            i++;
        }
        ans=max(ans,right-i+1); 
      }
      return ans;
    }
};