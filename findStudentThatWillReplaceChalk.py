class Solution:
    def chalkReplacer(self, chalk: List[int], k: int) -> int:
        for i in range(1,len(chalk)):
            chalk[i]+=chalk[i-1]
        
        k = k % chalk[-1]
        l=0
        h=len(chalk)
        
        while (l<h):
            m=(l+h)//2
            
            if chalk[m]==k:
                return m+1
            elif chalk[m]<k:
                l=m+1
            else:
                h=m
        return l
