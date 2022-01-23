class Solution {
public:
    static bool comp(pair<int,int> p1, pair<int,int> p2)
    {
        return p1.second > p2.second; // Decreasing Order of frequency
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int it: nums) mp[it]++;
        
        vector<pair<int,int>> frequency(mp.begin(), mp.end()); // Storing mp in vector
        sort(frequency.begin(), frequency.end(), comp);  // Sort it on basis of comparator
        vector<int> result;     // Declare vector for storing result
        for(int i=0; i<k; i++){
            result.push_back(frequency[i].first);
        }
        return result;
    }
};