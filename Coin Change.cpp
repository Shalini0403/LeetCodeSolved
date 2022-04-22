class Solution {
public:
    int coinChange(vector<int>& coins, int n) {
        // initial dp array
        int a[++n];
        a[0] = 0; //initialising to 0
        // sorting for easy comparison
        sort(begin(coins), end(coins));
        
        for (int i = 1; i < n; i++) {
            // setting dp[0] base value to 1, 0 for all the rest
            a[i] = INT_MAX;
            for (int c: coins) {
                if (i - c < 0) 
                    break;
                if (a[i - c] != INT_MAX) 
                    a[i] = min(a[i], 1 + a[i - c]);
            }
        }
        n=n-1;
        int ans;
        if(a[n]==INT_MAX)
            ans=-1;
        else
            ans=a[n];
        return ans;
    }
};
