class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;
        int k = 0;

        while (k <= j) {
            if (nums[k] == 0) {
                int temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
                i++;
                k++;
            }
            else if (nums[k] == 2) {
                int temp = nums[k];
                nums[k] = nums[j];
                nums[j] = temp;
                j--;
            }
            else {
                k++;
            }
        }
    }
};