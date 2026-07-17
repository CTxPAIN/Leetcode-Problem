class Solution {
public:

    void helper(vector<vector<int>>&result,vector<int>&ans,int start,int n,int k){
        if(ans.size()==k){
            result.push_back(ans);
            return;
        }
       
        
       for(int i=start;i<=n;i++){
        ans.push_back(i);
        helper(result,ans,i+1,n,k);
        ans.pop_back();
       }
      

    }
    vector<vector<int>> combine(int n, int k) {
    
        vector<vector<int>>result;
        vector<int>ans;
        int idx=0;
      
    
       helper(result,ans,1,n,k);
       return result;
    }
};


//START
//                             helper(start=1)
//                                ans = []
//           -------------------------------------------------------
//          |                           |                           |
//        i=1                         i=2                         i=3
//   ans.push(1)                 ans.push(2)                 ans.push(3)
//          |                           |                           |
//          V                           V                           V
//   helper(start=2)             helper(start=3)             helper(start=4)
//      ans = [1]                   ans = [2]                   ans = [3]
//   --------------              --------------                    |
//  |       |      |            |              |                  i=4
// i=2     i=3    i=4          i=3            i=4            ans.push(4)
// ans.    ans.   ans.         ans.           ans.                 |
// push(2) push(3)push(4)      push(3)        push(4)              V
//  |       |      |            |              |            helper(start=5)
//  V       V      V            V              V               ans = [3,4]
// [1,2]   [1,3]  [1,4]        [2,3]          [2,4]               SIZE=2
// SIZE=2  SIZE=2 SIZE=2       SIZE=2         SIZE=2             SAVE RESULT
// SAVE    SAVE   SAVE         SAVE           SAVE                  |
//  |       |      |            |              |                  RETURN
//  | - - - | - - -|            | - - - - - - -|                  .
//  RETURN  .      .            RETURN         .                  .
//  .       .      .            .              .                  .
//  .       .      .            .              .             - - -ans.pop(4)
//  .       .      .       - - -ans.pop(3) - - ans.pop(4)         .
//  .       .      .            .              .                  .
//  .  - - -ans.pop(3)          .              .                  .
// ans.     .      .            .              .                  .
// pop(2)   .      .            .              .                  .
//  .       .      .            .              .             - - -ans.pop(3)
//  .  - - - - - - ans.pop(4)   .              .
//  .                           .              .
//  - - - - - - - - - - - - - - ans.pop(2) - - -
