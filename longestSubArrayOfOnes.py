class Solution:
    def longestSubarray(self, nums: List[int]) -> int:
        res = 0
        k = 1 # max zeroes we can delete
        l = 0
        
        for r in range(len(nums)):
            if nums[r] == 0:
                k -= 1
            while k < 0 and l <= r:
                if nums[l] == 0:
                    k += 1
                l += 1
            res = max(res, r-l)
            
        return res
