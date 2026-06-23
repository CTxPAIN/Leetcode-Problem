class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // vector<pair<int,int>>v;
        // for(int i=0;i<numbers.size();i++){
        //     v.push_back({numbers[i],i});
        // }

        // int i=0 ,j=v.size()-1;
        int i=0,j=numbers.size()-1;
       
        while(i<j){
            // int sum=v[i].first+v[j].first;
            int sum=numbers[i]+numbers[j];
            if(sum==target){
                // return {v[i+1].second,v[j+1].second};
                return {i+1,j+1};
            }
            else if(sum>target){
                j--;
            }
            else {
                i++;
            }

        }
        return {};

    }
};