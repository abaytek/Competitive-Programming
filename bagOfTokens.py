class Solution:
    def bagOfTokensScore(self, tokens: List[int], power: int) -> int:
        tokens.sort()
        i,j=0,len(tokens)-1
        max_score=score=0
        while i<j:
            if tokens[i]>power and score==0:
                break  
            if tokens[i]<=power:
                score+=1
                power-=tokens[i]
                max_score=max(max_score,score)
                i+=1
            else:
                if score>0:
                    score-=1
                    power+=tokens[j]
                    j-=1
        if i<len(tokens) and tokens[i]<=power:
            score+=1
            max_score=max(max_score,score)
        return max_score
