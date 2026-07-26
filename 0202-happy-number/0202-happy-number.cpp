class Solution {
public:

    int squareSum(int n){
         int ans=0;
        while(n>0){
            int x=n%10;
             ans+=x*x;
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int>st;
       while(n!=1 && st.find(n)==st.end()){
        st.insert(n);
        n=squareSum(n);
       }
    return n==1;
        
    }
};