class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<=1){
            return 0;
        }
       sort(nums.begin(),nums.end());
       int n=nums.size();
       int max_diff=INT_MIN;
       for(int i = 1;i<n;i++){
        int diff=nums[i]-nums[i-1];
        max_diff=max(diff,max_diff);
    
       }
       return max_diff; 
    }
};