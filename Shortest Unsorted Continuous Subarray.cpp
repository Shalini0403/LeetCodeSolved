class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        
        //initialising a new vector exactly like nums
        vector<int> new_nums(nums);
        //sort the vector
        sort(new_nums.begin(),new_nums.end());
        
        int n=nums.size();
        int i=0,j=n-1;
        
        //increasing i till actual array elements are same as sorted array elements
        while(i<n && nums[i]==new_nums[i])
            i++;
         //decreasing j till actual array elements are same as sorted aarray elements
         while(j>i && nums[j]==new_nums[j])
            j--;
        
        //After we get i and j, the array the subarray between these indices needs to be sorted
        return j-i+1;
    }
};
