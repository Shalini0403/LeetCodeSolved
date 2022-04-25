class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        //First assigning three pointers to mark the last index of 0,1,2 respectivelr
        int l=0,m=0,h=(nums.size()-1),t=0;
        while(m<=h)
        {
            
            if(nums[m]==0)
            {
                 t=nums[l];
                nums[l]=nums[m];
                nums[m]=t;
                l++;
                m++;
            }
            else if(nums[m]==1)
            {
                m++;
            }
            else if(nums[m]==2)
            {
                 t=nums[h];
                nums[h]=nums[m];
                nums[m]=t;
                h--;;
            
            }
        }
        
    }
};
