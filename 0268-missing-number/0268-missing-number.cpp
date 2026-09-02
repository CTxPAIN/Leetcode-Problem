class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }
        return nums.size();
    }
    };


    // using map
    //class Solution {
// public:
//     int missingNumber(vector<int>& nums) {

//         unordered_map<int, int> mp;

//         // Store all numbers
//         for (int x : nums) {
//             mp[x]++;
//         }

//         // Check 0 to n
//         for (int i = 0; i <= nums.size(); i++) {
//             if (mp.find(i) == mp.end()) {
//                 return i;
//             }
//         }

//         return -1;
//     }
// };
