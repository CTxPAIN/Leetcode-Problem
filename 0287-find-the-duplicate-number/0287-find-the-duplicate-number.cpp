class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       
       unordered_map<int,int>mp;
       for(auto ele:nums){
        mp[ele]++;
       }
        int maxi=0;
        int ans=0;
        for(auto num:mp){
            if(num.second>maxi){
            maxi=max(maxi,num.second);
            ans=num.first;
            }
        }
        return ans;
    }
};