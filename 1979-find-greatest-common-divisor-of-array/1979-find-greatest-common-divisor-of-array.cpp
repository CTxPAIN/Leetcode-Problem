class Solution {
public:
    int gcd(int a,int b){
        while(b!=0){
            int rem=a%b;
            a=b;
            b=rem;
        }
        return a;
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int small=nums[0];
        int large=nums[nums.size()-1];

        return gcd(large,small);
    }
};