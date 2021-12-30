class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> result;
        for(int x=0; x<nums.size(); x++){
            if(nums[x] == target)
                result.push_back(x);
        }
        return result;
    }
};