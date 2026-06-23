class Solution {
public:
    int maximumCount(vector<int>& nums) {

        //method 1

        // int neg=0;
        // int pos=0;

        // for(int i=0;i<nums.size();i++){
        //     if(nums[i]<0){
        //         neg++;
        //     }
        //     else if(nums[i]>0){
        //         pos++;
        //     }
        // }
        // if(neg>pos)return neg;
        // else return pos;


        //method 2


        int start=0,end=nums.size();

        while(start<end){
            int mid=(start+end)/2;
            if(nums[mid]<0){
                start=mid+1;
            }
            else{
                end=mid;
            }
        }
        int negative=start;

         start=0,end=nums.size();
           while(start<end){
            int mid=(start+end)/2;
            if(nums[mid]<=0){
                start=mid+1;
            }
            else{
                end=mid;
            }
    }
    int positive=nums.size()-start;
    return max(positive,negative);
    }
};