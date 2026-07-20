class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        unordered_set<string>mp;
        int ans=0;
        for(auto word:words){
            string rev=word;
            reverse(word.begin(),word.end());
            if(mp.count(rev)){
                ans++;
            }
            else mp.insert(word);
        }
        return ans;
    }
};