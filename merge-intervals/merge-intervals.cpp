class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> result;
        int n=intervals.size();
        for(int i=0; i<n; i++){
            if(result.empty())
                result.push_back(intervals[i]);
            else{
                vector<int>&last = result.back();  //gives Last Element of the Result Vector
                //Check For Overlapping Intervals
                if(intervals[i][0] <= last[1])  // Compare start of the first interval with end of last
                    last[1] = max(last[1], intervals[i][1]); // end of last will be modified with either 
                else
                    result.push_back(intervals[i]); // No merging just push back the intervals
            }
        }
        return result;
    }
};