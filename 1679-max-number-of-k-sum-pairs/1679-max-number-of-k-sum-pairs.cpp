class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int counter = 0; 
        sort(nums.begin(), nums.end()); // 1 3 3 3 4
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j] == k) counter++, i++, j--;
            else if(nums[i]+nums[j] < k) i++;
            else if(nums[i]+nums[j] > k) j--;

        }
        return counter;
    }
    
};