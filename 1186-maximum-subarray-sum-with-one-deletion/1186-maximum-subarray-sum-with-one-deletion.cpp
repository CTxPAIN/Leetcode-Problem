class Solution {
    public:
        int maximumSum(vector<int>& arr) {
         int nodelete=arr[0];
         int result=arr[0];
         int onedelete=INT_MIN;
         int v2;
        for(int i=1;i<arr.size();i++){
            int prenodelete=nodelete;
            int preonedelete=onedelete;
         if(preonedelete==INT_MIN){
         v2=arr[i];
        }
         else{
            v2=preonedelete+arr[i];
            }

        nodelete=max(prenodelete+arr[i],arr[i]);
       onedelete=max(prenodelete,v2);
        result=max(result,max(nodelete,onedelete));
         }
            return result;
         }
         };
        