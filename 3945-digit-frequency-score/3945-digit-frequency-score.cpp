class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int,int>mp;

       string s=to_string(n);
       for(int i=0;i<s.size();i++){
        mp[s[i]-'0']++;
       }
        int sum=0;
        for(auto x:mp){
            sum+=x.second*x.first;
        }
        return sum;
    }
  
};