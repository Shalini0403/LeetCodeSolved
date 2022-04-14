class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        
        vector<vector<int> > ans;
	    recursive_call(nums, 0, ans);
	    return ans;
    }
    
	void recursive_call(vector<int> &num, int start, vector<vector<int> > &ans)	{
        
        
		if (start >= num.size()) {
		    ans.push_back(num);
		    return;
		}
		
		for (int i = start; i < num.size(); i++) {
		    swap(num[start], num[i]);
		    recursive_call(num, start + 1, ans);
		    // to set next iteration to original right position again in this case
		    swap(num[start], num[i]);
		}
    }
    
};
