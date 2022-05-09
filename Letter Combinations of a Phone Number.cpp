unordered_map<char, string> map_keys({{'2',"abc"},{'3',"def"},{'4',"ghi"},
    {'5',"jkl"},{'6',"mno"},{'7',"pqrs"},{'8',"tuv"},{'9',"wxyz"}});

class Solution {
public:
    
    
    vector<string> letterCombinations(string digits) {

        int len = digits.size();
        vector<string> ans;
        if (!len) return ans;
        back_track_branches(0, len, "", ans, digits);
        return ans;
    }
    
    void back_track_branches(int pos, int &len, string str, vector<string> &ans, string &digits) {
        if (pos == len) ans.push_back(str);
        else {
            string letters =map_keys[digits[pos]];
            for (int i = 0; i < letters.size(); i++)
                back_track_branches(pos+1, len, str+letters[i], ans, digits);
        }
    }
};
        
