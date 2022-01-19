class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // 1 2 2 4 7 8
        // 1 2 3 4 5 6 7 8 9
        sort(piles.begin(), piles.end());
        int result = 0;
        int len = piles.size();
        for(int i=len/3; i<len; i+=2)
        {
            result += piles[i];
        }
        return result;
    }
};