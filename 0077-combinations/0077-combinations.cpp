class Solution {
public:

    void helper(vector<vector<int>>&result,vector<int>&ans,int start,int n,int k){
        if(ans.size()==k){
            result.push_back(ans);
            return;
        }
       
        
       for(int i=start;i<=n;i++){
        ans.push_back(i);
        helper(result,ans,i+1,n,k);
        ans.pop_back();
       }
      

    }
    vector<vector<int>> combine(int n, int k) {
    
        vector<vector<int>>result;
        vector<int>ans;
        int idx=0;
      
    
       helper(result,ans,1,n,k);
       return result;
    }
};