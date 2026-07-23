class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_map<int,int>s;
        vector<int>ans;
        for(int ele:digits){
            s[ele]++;
        }
        for(int i=100;i<=999;i+=2){
            int x=i;
            int a=x%10;
            x/=10;
            int b=x%10;
            x/=10;
            int c=x;
            if(s.find(a)!=s.end()){
              s[a]--;
              if(s[a]==0)s.erase(a);
                if(s.find(b)!=s.end()){
                   s[b]--;
                   if(s[b]==0)s.erase(b);
                    if(s.find(c)!=s.end())ans.push_back(i);
                    s[b]++;
                }
                s[a]++;
            }
        }
        return ans;
    }
};