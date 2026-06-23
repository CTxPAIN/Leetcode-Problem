class Solution {
public:
    int characterReplacement(string s, int k) {
        int high=0,low=0,res=0,maxFreq=0;
        vector<int>f(26,0);
        for(int high=0;high<s.size();high++){
            f[s[high]-'A']++;
            maxFreq=max(maxFreq,f[s[high]-'A']);
            int len=high-low+1;
            while(len-maxFreq>k){
                f[s[low]-'A']--;
                low++;
                len=high-low+1;
            }
            res=max(len,res);
        }
        return res;

    }
};