class Solution(object):
    def subArrayRanges(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        n = len(nums)
        ans = 0

        for i in range(n):
            s = nums[i]  
            l = nums[i]   

            for j in range(i + 1, n):
                s = min(s, nums[j])
                l = max(l, nums[j])
                ans += l - s

        return ans