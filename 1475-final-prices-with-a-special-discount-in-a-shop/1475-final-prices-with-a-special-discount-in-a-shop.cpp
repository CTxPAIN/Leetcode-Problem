class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {
        stack<int>st;    //store indexxxxxxxx
        vector<int>price=arr;    //idhr price me arr ke sare element copy
        for(int i=0;i<arr.size();i++){
            while(!st.empty()&&arr[st.top()]>=arr[i]){
            price[st.top()]-=arr[i];
            st.pop();
         }
            st.push(i);
        }
        return price;

    }
};