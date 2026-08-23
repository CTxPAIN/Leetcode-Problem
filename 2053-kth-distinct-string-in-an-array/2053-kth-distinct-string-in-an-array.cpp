class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        string ans="";
        unordered_map<string,int>mp;
        for(auto ch:arr){
            mp[ch]++;
        }

        for(auto x:arr){
            if(mp[x]==1 ){
                k--;
                if(k==0){
                    ans=x;
                }
            }
        }
        return ans;
    }
};