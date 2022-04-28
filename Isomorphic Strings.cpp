class Solution {
public:
   bool isIsomorphic(string s, string t) {
        char hash1[128] = { 0 };
        char hash2[128] = { 0 };
        int n = s.size();
        for (int i = 0; i < n; ++i)
        {
           
            if (hash1[s[i]]!=hash2[t[i]]) 
                return false;
            hash1[s[i]] = i+1;
            hash2[t[i]] = i+1;
        }
        return true;    
    }
};
