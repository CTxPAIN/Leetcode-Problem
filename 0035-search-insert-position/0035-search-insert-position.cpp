class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {

        int n=arr.size();
       
        for(int i=0;i<arr.size();i++){

            if(target<arr[0]) return 0;
            if(arr[i]==target){
                return i;
            }
            else if(i+1<n&&target>arr[i]&&target<arr[i+1]){
              return  i+1;
            }
        } 
        return arr.size(); 
       
    }
};