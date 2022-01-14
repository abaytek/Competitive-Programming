class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int counter = 0;
        for(int x=0; x<nums.size(); x++){
            for(int j=0; j<nums.size(); j++){
                if(nums[x] == nums[j] && x<j)
                    counter++;
            }
        }
        return counter;
    }
};