
class Solution {
public:
    int majorityElement(vector<int>& arr) {
      unordered_map<int,int>mp;
      for(int nums:arr){
        mp[nums]++;
      }
        
      for(auto x:mp){
        if(x.second>arr.size()/2){
            return x.first;
        }
      }
      return -1;
    }


        
};