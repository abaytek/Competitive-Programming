class Solution {
public:
    bool checkString(string s) {
        int n = s.size();
       for(int i=1; i<n; i++)
       {
           if(s[i] == 'a' and s[i-1] == 'b') return false;
       }
        return true;
    }
};