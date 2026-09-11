class Solution {
public:
    void printSubset(vector<int>nums,vector<int>ans,int i,vector<vector<int>>& allSubsets){
        if(i==nums.size()){
            allSubsets.push_back(ans);
            return;
        }
        ans.push_back(nums[i]);
        printSubset(nums,ans,i+1,allSubsets);
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        printSubset(nums,ans,idx,allSubsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allSubsets;
        vector<int>ans;
        printSubset(nums,ans,0,allSubsets);
        
        return allSubsets;
    }
};