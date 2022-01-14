class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int>original;
        unordered_map<int,int>mp;
        for(auto& i:changed)
            mp[i]++;                      // O(n)
        sort(changed.begin(),changed.end());       // O(nlogn)
        for(auto& i:changed){
            if(mp[i]==0) 
                continue;
            if(mp[2*i]==0 || mp[0]==1) 
                return {};
            original.push_back(i);
            mp[2*i]--;
            mp[i]--;
        }
        return original;
    }
};