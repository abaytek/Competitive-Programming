class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        res = set()
        max_len, start = 0, 0
        for i, c in enumerate(s):
            while c in res:
                res.remove(s[start])
                start += 1
            res.add(c)
            max_len = max(max_len, i - start + 1)
        return max_len
                
