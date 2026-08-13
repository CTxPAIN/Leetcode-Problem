class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int>s;
       int left=0;
       for(int right=0;right<nums.size();right++){
        if(s.find(nums[right])!=s.end()){
            return true;
        }

        s.insert(nums[right]);

        if(right-left==k){
            s.erase(nums[left]);
            left++;
        }
       }
       return false;
    }

};