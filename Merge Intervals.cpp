class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        if(intervals.size()<=1)
            return intervals;
        
        sort(intervals.begin(), intervals.end());
        
        //pushing the first element after sorting
        ans.push_back(intervals[0]);
        
        //now comparing ech interval with the last entered interval in ans vector
        
        for(int i=0;i<intervals.size();i++)
        {
            //checking if new interval's lower limit is smaller than last enetered interval
            if(ans.back()[1]>=intervals[i][0])
            {
                ans.back()[1]=max(ans.back()[1],intervals[i][1]);
            }
            else
            {
                ans.push_back(intervals[i]);
            }
        }
        return ans;
    }
};
