class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>mp;
        for(auto x:s){
            mp[x]++;
        }

        for(auto ch:t){
            if(mp[ch]==0){
                return ch;
            }
            else{
                mp[ch]--;
            }
        }
        return '\0';
    }
};