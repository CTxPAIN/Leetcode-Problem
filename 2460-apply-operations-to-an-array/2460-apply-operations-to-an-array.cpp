class Solution {
public:
    vector<int> applyOperations(vector<int>& arr) {
     
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]==arr[i+1]){
                arr[i]*=2;
                arr[i+1]=0;
            }
        }
        int j=0;
        for(int idx=0;idx<arr.size();idx++){
            if(arr[idx]!=0){
                swap(arr[j],arr[idx]);
                j++;
            }
        }
        return arr;
    }
};