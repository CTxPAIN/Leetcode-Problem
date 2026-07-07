class Solution {
public:

    void combination(vector<vector<int>>&ans,vector<int>v,int start,int k,int target){
        if(k==0 && target==0){
            ans.push_back(v);
            return;
        }
        if(k<0 || target<0)return;
        for(int i =start;i<=9;i++){
            
            v.push_back(i);
            combination(ans,v,i+1,k-1,target-i);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>v;

        combination(ans,v,1,k,n);
        return ans;
    }

};