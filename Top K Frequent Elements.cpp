class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int >m1;
        vector<int> res;
        vector<int> ans;
        for (int i=0;i<nums.size();i++)
        {
            m1[nums[i]]++; 
        }
        for(int i=0;i<k;i++){
            int max=0;
        for (auto it=m1.begin();it!=m1.end();it++)
        {
            if(it->second>max)
                max=it->second;
        }
        for (auto it=m1.begin();it!=m1.end();it++)
        {
            if(it->second==max)
            { 
                res.push_back(it->first);
                it->second=-1;
            }
        }
        }
        for(int i=0;i<k;i++)
        {
            ans.push_back(res[i]);
        }
        return ans;
    }
};
