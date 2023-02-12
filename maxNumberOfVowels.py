class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        left, right = 0, k - 1
        max_num = float("-inf")
        count = 0
        vowels = ['a', 'e', 'i', 'o','u']
        for i in range(k):
            if s[i] in vowels:
                count = count + 1
        max_num = count
        for end in range(k,len(s)):
            start = end - k + 1
            if s[start-1] in vowels:
                count = count - 1
            if s[end] in vowels:
                count = count + 1
            max_num = max(max_num, count)

        return max_num       

      
       
        




