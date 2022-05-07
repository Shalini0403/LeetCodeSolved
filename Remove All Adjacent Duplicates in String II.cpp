class Solution {
public:
    string removeDuplicates(string s, int k) {
        
       int j = 0;
        //assigning array for count 
       vector<int> count(s.size(), 1);
    for (int i = 0; i < s.size(); ++i, ++j) {
         s[j] = s[i];
        if (j > 0 && s[j] == s[j - 1])
            count[j] = count[j - 1] + 1;
        else 
            count[j] = 1;
        if (count[j] == k) 
            j -= k;
    }
    return s.substr(0, j);
    }
};
