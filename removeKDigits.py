class Solution:
    def removeKdigits(self, num: str, k: int) -> str:
        dig = list()
        for n in num:
            while dig and k and dig[-1] > n:
                dig.pop()
                k -= 1 
            if dig or n is not '0':
                dig.append(n)
        if k: 
            dig = dig[0:-k]
            
        return ''.join(dig) or '0'
