class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        vector<pair<int,int>>v;
        for(int i=0;i<arr.size();i++){
            v.push_back({arr[i],i});
        }
        sort(v.begin(),v.end());
        int i=0,j=v.size()-1;

        while(i<j){
            int sum=v[i].first+v[j].first;
            if(sum==target){
                return {v[i].second,v[j].second};
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
