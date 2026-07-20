class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        return nums.erase(remove(nums.begin(), nums.end(), val), nums.end()), nums.size();
    }
};