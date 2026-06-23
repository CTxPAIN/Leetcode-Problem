class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i=0;i<nums.size();i++){
            
            while(!st.empty()&& nums[i]>nums[st.top()]){
                int index=st.top();
                st.pop();
                ans[index]=i-index;

            }
            st.push(i);
        
        }
        return ans;

    }
};