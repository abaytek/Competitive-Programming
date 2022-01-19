class Solution {
public:
    int find(int n,vector<int>& arr)
    {
    for(int i=0;i<arr.size();i++)
        if(arr[i] == n)
            return i;
    
    return -1 ;
    }

vector<int> pancakeSort(vector<int>& arr) {
    
    vector<int> ans ;
    int n = arr.size() ;
    
    while(n)
    {
        if(arr[n-1] != n)
        {
            int k = find(n,arr) ;
            reverse(arr.begin(),arr.begin()+k+1) ;
            ans.push_back(k+1) ;
            reverse(arr.begin(),arr.begin()+n) ;
            ans.push_back(n) ;
        }
        n-- ;
    }
    
    return ans ;
    
    
}
};