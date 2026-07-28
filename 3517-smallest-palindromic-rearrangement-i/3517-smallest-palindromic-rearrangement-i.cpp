class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>mp;

        string left;
        char middle='\0';
        
        for(auto ele:s){
            mp[ele]++;
        }

        // for left
        for(auto it :mp){
            int freq=it.second;
            char ch=it.first;

            if(freq%2==1){
                middle=ch;
            }
            for(int i=0;i<freq/2;i++){
                left+=ch;
            }

        }

        //right

        string right=left;
        reverse(right.begin(),right.end());

        //return if length is odd
        if(s.length()%2==1)return left+middle+right;

        else return left+right;

    }
};