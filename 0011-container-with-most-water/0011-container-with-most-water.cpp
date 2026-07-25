class Solution {
public:
    int maxArea(vector<int>& height) {
    int left=0;
    int right=height.size()-1;
    int ans=0;
    while(right>left){
        int width=right-left;
        int shortWallHeight=min(height[right],height[left]);
        ans=max(ans,width*shortWallHeight);

        if(height[left]>height[right])right--;
        else left++;
    }
    return ans;
    }
};