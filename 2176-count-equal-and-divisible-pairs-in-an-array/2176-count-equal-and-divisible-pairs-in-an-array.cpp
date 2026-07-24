class Solution {
public:
// 24/07/26
    int countPairs(vector<int>& nums, int k) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                if(i==j)continue;
                if(nums[i]==nums[j]&& (i*j)%k==0){
                    count++;
                }
            }
        }
        return  count;
    }
};