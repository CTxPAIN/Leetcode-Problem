class Solution {
public:
    bool isPowerOfThree(int n) {

        if(n==1)return true;
        if(n%3!=0||n<=0)return false;
        int newN=n/3;
        // if(newN==1)return true;  need nhi hai kyuki newN==1 so jb recusrion function call hoga toh n==1 hoga toh return true 
        

        return isPowerOfThree(newN);
    }
};