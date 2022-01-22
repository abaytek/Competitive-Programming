class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int i=0;
        int n=nums.size()-1;
        while(i<n){
            if(nums[i]!=nums[i+1])
                break;
            else
                i+=2;
        }
        return nums[i];
      }
};