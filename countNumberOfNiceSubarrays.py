class Solution:

    def numberOfSubarrays(self, nums: List[int], k: int) -> int:

        hashmap = defaultdict(int)

        odd_counts,res = 0,0

        hashmap[0] = 1

        for i in range(len(nums)):

            if nums[i]%2 != 0:

                odd_counts+=1

            res += hashmap[odd_counts-k]

            hashmap[odd_counts]+=1

        return res













                

        
