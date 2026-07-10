class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        vector<bool>ok(26,false);
        int count=0;
        for(char ch:allowed){
            ok[ch-'a']=true;
        }

    for(string word:words){
        bool consistent=true;
        for(char ch:word){
            if(ok[ch-'a']==false){
                consistent=false;
                break;
            }

        }
        if(consistent){
            count++;
        }
    }
       
    return count;
    }
};