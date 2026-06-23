class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans=0;
        int diff=INT_MAX;


        for(int i=0;i<nums.size()-2;i++){
          int  j=i+1;
           int k=nums.size()-1;
           while(j<k) {
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==target)return target;
            else if(abs(sum-target)<diff){
                diff=abs(sum-target);
                ans=sum;

            }
            else if(sum<target){
                j++;
            }
            else{
                k--;
            }
           }
        }
        return ans;
    }
};