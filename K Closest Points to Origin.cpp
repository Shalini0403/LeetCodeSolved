class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        
        //creating a max heap to store distance and the coordinates
        
        priority_queue<pair<int, pair<int, int>>> p;
        int n=points.size();
        
        //populate the max heap
        
        for(int i=0;i<n;i++)
        {
           //entering square of distance and corresponding coordinates
            p.push({points[i][0]*points[i][0] + points[i][1]*points[i][1],{points[i][0],points[i][1]}});
            
            //checking the k condition and popping if exceeds
            if(p.size()>k)
                p.pop();
        }
        vector<vector<int>> ans;
        //now selecting what to print for the answer
        while(p.size()>0)
        {
            //storing the pair in a temporary vector
            vector<int> temp;
            temp.push_back(p.top().second.first);
            temp.push_back(p.top().second.second);
            ans.push_back(temp);
            p.pop();
        }
        return ans;
    }
};
