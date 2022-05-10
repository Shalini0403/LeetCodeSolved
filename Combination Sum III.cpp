class Solution {
    
    vector<vector<int>> res;
    
public:
    
    int total_sum(vector<int>& combi){
        int ans = 0;
        for(auto x: combi){
            ans += x;
        }
        return ans;
    }
    
    void combi_sum(int k, int n, vector<int>& combi, int num){
        
        if(k == 0){
            if(total_sum(combi) == n ){
                res.push_back(combi);
            }
            return;
        }
        
        if(num > 9) return;
        
        combi.push_back(num); 
        combi_sum(k - 1, n, combi, num + 1);
        combi.pop_back();
        combi_sum(k, n, combi, num + 1);    
        
    }
    
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector<int> combi;
        combi_sum(k, n, combi, 1);
        return res;
        
    }
};
