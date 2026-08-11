class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        while(i<t.length() && j<s.length()){
            if(s[j]!=t[i]){
                i++;
            }
            else{
                i++;
                j++;
            }
        }
        return j==s.length();
    }
};