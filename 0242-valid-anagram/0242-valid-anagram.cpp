class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int>map1;
        for(auto x:s){
            map1[x]++;
        }
        //now we will check in string t if if find the char then delete the char from map 1 char 
          for(auto x : t){
            if(map1.find(x) == map1.end() || map1[x] == 0){
                return false; // character not present or extra
            }
            map1[x]--;
          }
          return true;




    }
};