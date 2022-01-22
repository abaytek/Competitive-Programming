class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x = 0;
        for(int m:nums)
        {
            x^=m;
        }
        return x;
      }
};