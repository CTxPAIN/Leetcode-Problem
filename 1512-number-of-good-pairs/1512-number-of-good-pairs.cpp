class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
    //     unordered_map<int,int>mp;
    //     for(auto num:nums){
    //         mp[num]++;
    //     }
    //     int count=0;
    //     for(auto x:mp){
    //         if(x.second>=2)count+=x.second;
    //     }
    //     return count;
    // }
    int count=0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            if(nums[i]==nums[j])
            count++;
        }
    }
    return count;
    }
};