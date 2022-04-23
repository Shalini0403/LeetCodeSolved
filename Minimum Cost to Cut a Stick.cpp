class Solution {
public:
    int dp[101][101];
    
    int rec_mincost(int start, int end, vector<int>& cuts, int st, int c_end)
    {
        if(st>c_end)
            return 0;
        
        if(dp[st][c_end]!=-1)
            return dp[st][c_end];
        
        int mini = INT_MAX;
        for(int i=st; i<=c_end; i++)
            mini = min(mini, (end-start)+rec_mincost(start, cuts[i], cuts, st, i-1)+rec_mincost(cuts[i], end, cuts, i+1, c_end));
        
        return dp[st][c_end] = mini;
    }
    
    int minCost(int n, vector<int>& cuts) {

        memset(dp,-1,sizeof(dp));
        sort(cuts.begin(),cuts.end());
        return rec_mincost(0, n, cuts, 0, cuts.size()-1);
    }
};
