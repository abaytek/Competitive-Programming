class Solution:
    def xorQueries(self, arr: List[int], queries: List[List[int]]) -> List[int]:
        xor = [0] * (len(arr)+1)
        n=len(arr)
        for i in range(n):
            xor[i]=xor[i-1]^arr[i] 
        return [xor[j] ^ xor[i-1] for i, j in queries]
            
