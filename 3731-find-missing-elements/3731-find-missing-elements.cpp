class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;

        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] > nums[i] + 1) {
                for (int x = nums[i] + 1; x < nums[i + 1]; x++) {
                    ans.push_back(x);
                }
            }
        }

        return ans;
    }
};