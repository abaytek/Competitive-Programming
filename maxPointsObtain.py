class Solution:
    def maxScore(self, cardPoints: List[int], k: int) -> int:
        left, right = 0, len(cardPoints) - k
        sum_ = sum(cardPoints[right:])
        max_ = sum_
        while right < len(cardPoints):
            sum_ += cardPoints[left] - cardPoints[right]
            max_ = max(max_, sum_)
            left += 1
            right += 1
        return max_
    
