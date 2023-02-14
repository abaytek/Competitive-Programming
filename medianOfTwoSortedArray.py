class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        merged_list = nums1+nums2
        sorted_list = sorted(merged_list)
        length = len(merged_list)   # 1 2 3 4
        median = 0
        midd = (length // 2) - 1
        if length == 0:
            return median
        if length % 2 == 0:
            median = (sorted_list[midd] + sorted_list[midd+1]) / 2
        else:
            median = sorted_list[midd + 1]
        return median




                







