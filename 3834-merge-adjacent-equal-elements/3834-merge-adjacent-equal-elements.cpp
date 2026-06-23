class Solution {
public:
    vector<long long> mergeAdjacent(vector<int>& nums) {
        vector<long long>ans;
        stack<long long>st;
        for(int i=0;i<nums.size();i++){
            long long temp=nums[i];
            while(!st.empty() && st.top()==temp){
                 temp+=st.top();
                st.pop();
            }
                st.push(temp);
            
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};



