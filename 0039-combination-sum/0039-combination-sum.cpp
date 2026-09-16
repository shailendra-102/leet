class Solution {
public:
    void distinctTar(vector<int>& current,vector<vector<int>>& ans,vector<int>& candidates, int target,int idx){
        if(target == 0){
            ans.push_back(current);
            return;
        }
        if(idx == candidates.size() || target < 0) {
            return;
        }
        current.push_back(candidates[idx]);
        distinctTar(current, ans, candidates, target - candidates[idx], idx);
        current.pop_back();
        distinctTar(current, ans, candidates, target, idx + 1);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;
        vector<vector<int>> ans;
        distinctTar(current,ans,candidates,target,0);
        return ans;
    }
};