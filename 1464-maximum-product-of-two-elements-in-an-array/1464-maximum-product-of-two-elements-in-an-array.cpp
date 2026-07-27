class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        // for(int i=0;i<nums.size();i++){
        //     int max1=0;
        //     int max2=0;
        //     for(int j=1;j<nums.size();i++){
        //         max1=(nums[i]-1)*(nums[j]-1),
        //     }
        // }

        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int max=(nums[n]-1)*(nums[n-1]-1);
        return max;
    }
};