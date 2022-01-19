class Solution {
public:
    int maxCoins(vector<int>& piles) {
        // 1 2 2 4 7 8
        // 1 2 3 4 5 6 7 8 9
        sort(piles.begin(), piles.end());
        int result = 0;
        int j = piles.size()-1;
        int i = 0;
        while(i <= j)
        {
            j--;
            result += piles[j];
            j--;
            i++;
        }
        return result;
    }
};