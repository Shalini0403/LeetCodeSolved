class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size()==0)
            return false;
        
        int m=matrix.size();
        int n=matrix[0].size();
        
        int l=0;
        int r=m*n-1;
        
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            int mid_ele=matrix[mid/n][mid%n];
            if(mid_ele==target)
                return true;
            else if(mid_ele>target)
                r=mid-1;
            else if(mid_ele<target)
                l=mid+1;
        }
        return false;
    }
};
