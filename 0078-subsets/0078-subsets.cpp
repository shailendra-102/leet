class Solution {
public:
    void printSubset(vector<int> arr, vector<int>& ans, int i,
                     vector<vector<int>>& allSubset) {
        if (i == arr.size()) {
            allSubset.push_back(ans);
            return;
        }
        ans.push_back(arr[i]);
        printSubset(arr, ans, i + 1, allSubset);
        ans.pop_back();
        printSubset(arr, ans, i + 1, allSubset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubset;
        vector<int> ans;
        printSubset(nums, ans, 0, allSubset);
        return allSubset;
    }
};