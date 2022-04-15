class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        vector <int> i1;
        vector<int> j1;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            { 
            
                if(matrix[i][j]==0)
                {
                    i1.push_back (i);
                    j1.push_back(j);
                }
            }
        }
        for(int i=0;i<i1.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
             matrix[i1[i]][j]=0;
           
        }
        for(int i=0;i<j1.size();i++)
        {
            for(int j=0;j<matrix.size();j++)
             matrix[j][j1[i]]=0;
           
        }
        
        
    }
};
