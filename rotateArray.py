class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        copy = [num for num in nums]
        n = len(nums)
        for i, num in enumerate(copy):
            nums[(i + k) % n] = copy[i] 
            

        
