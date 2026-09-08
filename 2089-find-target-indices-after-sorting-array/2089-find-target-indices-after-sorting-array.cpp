class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
       int smaller=0;
       int greater = 0;
       int size=nums.size();
       for (int i=0 ; i<nums.size() ; i++)
       {
            if (nums[i]<target)
            smaller++;
            else if (nums[i]>target)
            greater++;
       }
       vector<int>ans(size-smaller-greater);
       for(int i=0 ; i<size-smaller-greater; i++)
       {
        ans[i] = i+smaller;
       }
    return ans;
    }
};