class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        #prefix sum
        for idx in range(1, len(nums)):
            nums[idx] += nums[idx-1]
        nums = [0]+nums
        
        left, right = 1, 1
        min_ = len(nums)+1
        
        for right in range(1, len(nums)):
            while nums[right]-nums[left-1] >= target:
                min_ = min(min_, right-left+1)
                left+=1
        
        if min_ == len(nums)+1:
            return 0
        return min_
