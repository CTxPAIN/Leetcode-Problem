class Solution {
public:


    int reverseNumber( int num){
        int reverse=0;
        while(num>0){
      
            reverse=reverse*10+num%10;
            num/=10;
        }
        return reverse;
    }
    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int>map;
        for(auto num:nums){
          map.insert(num);

          int reversed=reverseNumber(num);
          map.insert(reversed);

        }
            return map.size();
             
       
    }
};