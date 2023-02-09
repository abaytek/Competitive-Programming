class Solution:
    def longestMountain(self, arr: List[int]) -> int:
        maxlength = 0
        i = 1
        while(i<len(arr)-1):
            peak = arr[i]>arr[i-1] and arr[i]>arr[i+1]
            if not peak:
                i += 1
                continue

            leftidx = i-2
            while(leftidx >= 0 and arr[leftidx]<arr[leftidx+1]):
                leftidx -= 1

            rightidx = i+2
            while(rightidx < len(arr) and arr[rightidx]<arr[rightidx-1]):
                rightidx += 1

            length = rightidx-leftidx-1
            if(length>maxlength):
                maxlength = length
            i = rightidx
        return maxlength
