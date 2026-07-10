class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int left = 0;
        int right = 0;
        for(int i = 0; i<nums.size();i++){
            for(int l=0;l<i;l++)
            {
                left+=nums[l];
            }
            for(int r=i+1;r<nums.size();r++)
            {
                right+=nums[r];
            }
            if(left == right)
            return i;
            else 
            left = right = 0;
            
            
        }
        return -1;
    }
};