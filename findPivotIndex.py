class Solution:
    def pivotIndex(self, nums: List[int]) -> int:
        prefix_sum = 0
        post_sum = 0
        for i in range(len(nums)):
            prefix_sum = sum(nums[:i])
            post_sum = sum(nums[i+1:])

            if prefix_sum == post_sum:
                return i
        return -1
