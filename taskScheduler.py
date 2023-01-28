class Solution:
    def leastInterval(self, tasks: List[str], n: int) -> int:
        chars = {}
        # keep track of the occurence of characters
        for i in tasks:
            if i in chars:
                chars[i] += 1
            else:
                chars[i] = 1
        # get the max values of the count 
        lst = sorted(chars.values(), reverse = True)
        max_number = lst[0]
        
        i = 0
        counter = 0
        while i < len(lst) and lst[i] == max_number:
            counter += 1
            i += 1
        
        res = (max_number - 1) * (n + 1) + counter
        return max(res, len(tasks))

