class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> mp;
        for(auto it : arr) mp[it]++;
        
        vector<int> frequency;
        for(auto it : mp) frequency.push_back(it.second);
        sort(frequency.begin(), frequency.end(), greater<int>());
        
        int count = 0, n = arr.size(), i = 0;
        
        while(n > arr.size() / 2){ 
            n -= frequency[i++];
            count++;
        }
        return count;
    }
};