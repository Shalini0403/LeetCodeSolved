class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        int n=nums.size();
        //array to store product of element left of a particular element
        int l_prod[n];
        //array to store product of element right of a particular element
        int r_prod[n];
       
        l_prod[0]=1;
        r_prod[n-1]=1;
        
        //storing the left prods
        for(int i=1;i<n;i++)
        { 
            l_prod[i]=l_prod[i-1]*nums[i-1];
        }
        //storing the right prods
        for(int i=n-2;i>=0;i--)
        { 
            r_prod[i]=r_prod[i+1]*nums[i+1];
           
        }
        //calculating prods except self
        vector<int> ans;
        for(int i=0;i<n;i++)
        {
            int temp=l_prod[i]*r_prod[i];
            ans.push_back(temp);
        }
        return ans;
    }
};
