bool Compare(vector<int>&a, vector<int>&b){
    return (a[0] *a[0] + a[1]*a[1]) < (b[0]*b[0] + b[1]*b[1]);
}
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
      sort(points.begin(), points.end(),Compare);
        vector<vector<int>> result;
        for(int i=0; i<k; i++)
            result.push_back(points[i]);
        return result;
    }
};