class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       
        int avgSum=0;
        for(int i=0;i<k;i++){
            avgSum+=nums[i];
        }
       int maxSum=avgSum;

        for(int i=k;i<nums.size();i++){
            avgSum=avgSum-nums[i-k];
            avgSum=avgSum+nums[i];

            maxSum=max(maxSum,avgSum);
        }

        return (double) maxSum/k;

    }
};