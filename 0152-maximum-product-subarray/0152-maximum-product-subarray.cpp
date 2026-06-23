class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int bestending=nums[0];
        int minbestending=nums[0];
        int res=nums[0];
        for(int i=1;i<nums.size();i++){
            int v1=nums[i];
            int v2=nums[i]*bestending;
            int v3=nums[i]*minbestending;
            bestending=max(v1,max(v2,v3));
            minbestending=min(v1,min(v2,v3));
            res=max(res,max(bestending,minbestending));
        }
        return res;

    }
};