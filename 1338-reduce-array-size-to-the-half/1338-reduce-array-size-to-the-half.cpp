class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto it : arr) mp[it]++;
        
        vector<int> frequency;
        for(auto it : mp) frequency.push_back(it.second);
        sort(frequency.begin(), frequency.end(), greater<int>());
        
        int ans = 0, n = arr.size(), idx = 0;
        
        while(n > arr.size() / 2){
            n -= frequency[idx++];
            ans++;
        }
        return ans;
    }
};