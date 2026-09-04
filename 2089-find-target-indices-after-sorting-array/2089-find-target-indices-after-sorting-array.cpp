// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//         sort(nums.begin(),nums.end());
//         vector<int>ans;
//         int low=0;
//         int high=nums.size()-1;

//         while(high>low){
//             int mid=(low+(high-low))/2;
//             if(nums[mid]==target){
//                 ans.push(mid);
//             }


//         }
//     }
// };

class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<int> ans;

        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] == target) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};