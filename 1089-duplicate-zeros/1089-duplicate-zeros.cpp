class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
      int j=arr.size()-1;
      int i=0;
      while(i<j)  {
        if(arr[i]==0){
            arr.insert(arr.begin()+i+1,0);
            arr.pop_back();
            i++;
        }
        i++;
      }
    }
};