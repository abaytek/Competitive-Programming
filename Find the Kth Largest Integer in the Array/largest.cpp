 bool comp(string s1, string s2)
    {
    // If size of numeric strings are same the put lowest value first
    if (s1.size() == s2.size()) 
        return s1 < s2;
     
    // If size is not same put the numeric string with less number of digits first
    return s1.size() < s2.size();
 }
class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
       sort(nums.begin(), nums.end(),comp);  // 3 6 7 10
       return nums[nums.size()-k];
    }
};
