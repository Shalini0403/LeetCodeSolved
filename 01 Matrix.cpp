class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        
        //creating this queue which tracks the matrix elements which are 0
        queue<pair<int, int>> q;
        
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                //if the element is 0 add to the queue
                if(mat[i][j]==0)
                    q.push({i,j});
                //if not 0 then make it -1 to know distance is non zero for this element
                else
                    mat[i][j]=-1;
            }
        }
        
        //assigning direction to calculate coordinates of adjacent cells
        vector<vector<int>> dirs={{1,0},{0,1},{0,-1},{-1,0}};
        int length=0;
        while(!q.empty())
        {           
            int s=q.size();
            length++;
            while(s-->0)
            {
            //collecting current 0 cell coordinates and popping later
            pair<int,int> cell=q.front();
            q.pop();
            for(auto& x:dirs)
            {
                int x1=cell.first+x[0];
                int y1=cell.second+x[1];
                if(x1<0 || y1<0 || x1==mat.size() || y1==mat[0].size() || mat[x1][y1]!=-1)
                    continue;
                mat[x1][y1]=length;
                q.push({x1,y1});
                
            }
            }
        }
        return mat;
        
    }
   
};
