class Solution {
public:
    vector<vector<int>>ans;
    vector<int>curr;
    void solve(int i,vector<int>& nums){
        if(i == nums.size()){
            ans.push_back(curr);
            return;
        }
        solve(i+1,nums);
        curr.push_back(nums[i]);
        solve(i+1,nums);
        curr.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        solve(0,nums);
        return ans;
    }
};
