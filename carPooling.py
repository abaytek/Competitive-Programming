class Solution:
    def carPooling(self, trips: List[List[int]], capacity: int) -> bool:
        d = [0 for i in range(1000)]
        for i in trips:
            add, start, end = i
            d[start] += add
            if end < 1000:
                d[end] -= add
        l = d.copy()
        for i in range(1, 1000):
            l[i] = l[i-1] + d[i]
        for i in l:
            if i > capacity:
                return False
        return True
