/* 
1. First thing is to get the strings which we will finally get after we finishing in the editor, as said in question. After we get the strings we compare them, if they are same return true otherwise false.
2. So we traverse the strings backwards and whenever backspace ('#) appears we skip the character before it.
3. The final strings to be compared can also be stored in stack data structure, I have used string here.
4. Time complexity is O(N1+N2). N1,N2 are length of initial strings given.
5. Space Complexity O(M1+M2)

This approach can be optimised by reducing the space complexity and not storing the final strings, but directly comparing while traversing using two pointers.
*/                                                          
```
class Solution {
public:
    bool backspaceCompare(string s, string t) {
       
    /*First declaring two blank strings to store the final two strings to be compared after 
    removing backspace character */
       string dummy1="";
        string dummy2="";
        
//Loop runs backwards here to catch '#' first and skip that many characters occuring before it
// counter variable to count '#' and jump characters to not include in final string
        
        int count1=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='#')
                count1++;
            else if(count1==0)
            {
                dummy1.push_back(s[i]);
            }
            //if k!= 0 and current chr is not '#' we skip the character and move on
            else 
                count1--;
        }
        
        count1=0;
        for(int i=t.size()-1;i>=0;i--)
        {
            if(t[i]=='#')
                count1++;
            else if(count1==0)
            {
                dummy2.push_back(t[i]);
            }
            //if k!= 0 and current chr is not '#' we skip the character and move on
            else 
                count1--;
        }
        
        return dummy1==dummy2;
        
        
    }
};
```                                                       ``
