class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int& x:nums){
            x=x*x;
        }
        sort(nums.begin(),nums.end());
        long long ans=0;
        int n=nums.size();
        int neg=n/2;
        for(int i=0;i<neg;i++){
            ans-=nums[i];
        }
        for(int i=neg;i<n;i++){
            ans+=nums[i];
        }
        return ans;
    }
};