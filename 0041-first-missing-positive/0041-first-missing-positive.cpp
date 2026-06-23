#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        
        int temp = 1; 
        
        for (int num : nums) {
            if (num == temp) {
                temp++; 
            }
        }
        
        return temp;
    }
};