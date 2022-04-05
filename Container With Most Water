class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int max1=0;
        int start=0,end=height.size()-1;
        
        while(start<end)
        {
            if(height[start]<height[end])
            {
                max1=max(max1, height[start]*(end-start));
                start++;
            }
            else
            {
                
                max1=max(max1, height[end]*(end-start));
                end--;
            
            }
        }
        return max1;
        
    }
};
