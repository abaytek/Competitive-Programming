class Solution {
public:
    string sortSentence(string s) {
        string result;
        string word;
        vector<string> split(10);
        for(int i=0; i<s.length(); i++){
            if(s[i] >= '0' && s[i] <= '9'){
                split[s[i]-48] = word+" ";// ASCI 48-57
                word ="";
                i++; //Skip thr space 
            }else
                word += s[i];
            
            }
        for(string x:split)
            result+=x;
        result.pop_back(); //Delete the last space
        return result;
    }
};