class Solution {
public:
    bool isArithmetic(vector<int> &sub)
    {
        int n = sub.size();
        if(n == 2) return true;
        int d = sub[1] - sub[0];
        for(int i=1; i<n; i++)
            if(sub[i]- sub[i-1] != d) return false;
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> result;
        int m = l.size();
        for(int i=0; i<m; i++)
        {
            int x = l[i];
            int y = r[i];
            vector<int> sub;
            for(int j=x; j<=y; j++)
                sub.push_back(nums[j]);
            sort(sub.begin(), sub.end());
            if(isArithmetic(sub))
                result.push_back(true);
            else result.push_back(false);
        }
        return result;
    }
    
};