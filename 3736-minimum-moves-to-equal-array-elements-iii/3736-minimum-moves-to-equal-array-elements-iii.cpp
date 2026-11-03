class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count =0;
        int n=nums.size();
        int max=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>max)
            max=nums[i];
        }
        for(int x:nums){
            if(x<max)
            count +=max-x;
        }
        return count;
    }
};