bool cmp(string a, string b){
    return a+b > b+a;
}

class Solution {
public:
    string largestNumber(vector<int>& nums) {
      vector<string> large;
        for(int i=0; i<nums.size(); i++){
            large.push_back(to_string(nums[i]));
        }
        //Now large have all the Elements of nums
        sort(large.begin(),large.end(),cmp);
        string result;
        for(int i=0; i<large.size(); i++){
            result += large[i];
        }
        if(result[0] == '0') return "0";
        return result;
    }
};