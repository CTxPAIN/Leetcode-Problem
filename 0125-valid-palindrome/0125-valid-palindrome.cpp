class Solution {
public:
    bool isPalindrome(string s) {
      string ans="";
      for(auto ele:s){
        if(isalnum(ele)){
        if(ele!=' '){
            ans+=tolower(ele);
        }
      }
      }

      int i=0,j=ans.size()-1;
      while(j>i){
        if(ans[i]!=ans[j])return false;
        i++;
        j--;
      }
      return true;
    }
};