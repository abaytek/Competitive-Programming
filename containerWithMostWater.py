class Solution:
    def maxArea(self, height: List[int]) -> int:
        beg = 0
        end = len(height)-1
        max_area = 0
        for index in range(len(height)-1):
            holder = min(height[beg], height[end]) * (end-beg)
            max_area = holder if holder > max_area else max_area
            if height[end] > height[beg]:
                beg += 1
            elif height[beg] > height[end]:
                end -= 1
            else:
                if height[beg+1] > height[end-1]:
                    beg += 1
                else:
                    end -= 1
        return max_area
