class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int count=0,maxi=0,i=0;
        int arr[256]={0};
        
        while(i<s.length())
        {
            if (arr[s[i]]==0)
            {
                arr[s[i]]++;
                count++;
                i++;
            }
            else
            {
                maxi=max(maxi,count);
                i=i-count+1;
                count=0;
                
                for(int j=0;j<256;j++)
                {
                    arr[j]=0;
                }
            }
        }
        return max(maxi,count);
    }
};
