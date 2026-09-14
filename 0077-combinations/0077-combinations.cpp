class Solution {
public:
    void nPossible(int start,int n,int k,vector<int>& current,vector<vector<int>>& ans){
        if(current.size()==k){
            ans.push_back(current);
            return;
        }
        for(int i=start;i<=n;i++){
            current.push_back(i);
            nPossible(i+1,n,k,current,ans);
            current.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>current;
        vector<vector<int>> ans;
        nPossible(1,n,k,current,ans);
        return ans;
    }
};