class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        //storing the updated sum in this variable
        //initializing with first triplet that we come across
        int ans=nums[0] + nums[1] + nums[nums.size()-1];
        //sorting the vector so that we can apply two pointer
        sort(nums.begin(),nums.end());
        //two pinter technique under a for loop
        for(int i=0;i<nums.size()-2;i++)
        {
            //keeping one pointer at start and other at end and move them closer conditionally
            int l=i+1;
            int r=nums.size()-1;
            while(l<r)
            {
                int sum=nums[i]+nums[l]+nums[r];
                if(sum>target)
                    r=r-1;
                else
                    l=l+1;
                
                // checking if difference is minimum or not
            if(abs(target-sum) < abs(ans-target))
                ans=sum;
            } 
            
        }
        return ans;
    }
};
