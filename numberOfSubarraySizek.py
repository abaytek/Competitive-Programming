class Solution:
    def numOfSubarrays(self, arr: List[int], k: int, threshold: int) -> int:
        if len(arr) < k:
            return 0
        left, right = 0, k -1
        count, sum_, avg = 0, 0, 0
        sum_ = sum(arr[:k])
        avg = sum_ / k
        if avg >= threshold:
            count += 1
        while right < len(arr)-1:
            right +=1
            sum_ += (arr[right] - arr[left])
            left += 1    
            avg = sum_ / k
            if avg >= threshold:
                count += 1
        return count 

            
