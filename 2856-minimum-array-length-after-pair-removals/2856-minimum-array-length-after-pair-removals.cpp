class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        unordered_map<int, int>freq;
        int maxFreq = 0;
        for(int num:nums){
            freq[num]++;
            maxFreq = max(maxFreq,freq[num]);
        }
        int n = nums.size();
        if (maxFreq <= n / 2) {
            return n % 2;
        }
        return 2 * maxFreq - n;
    }
};