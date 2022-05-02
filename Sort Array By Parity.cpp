/*
Intuition/Approach

1. We need to bring even numbers at the beginning and once all even numbers have come at the beginning automatically the other numbers left after it will be odd, so we tackle only the even ones here.
2. We assign a variable to keep track of the last position(kth) till where even number has been filled and loop across the nums array to find even numbers
3. Whenever we come across an even number we bring it to the kth position, by swapping
4. Since one traversal is needed time cplexity is O(N)
5. No other datastructure is used to hold the contents so space complexity is O(1)

*/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        
        //Initialising pointer to keep track of even numbers
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            //if the number is even bring it after the last moved even number in front
            if(nums[i]%2==0)
            {
                //Swapping and moving even number to beginning
                int temp=nums[k];
                nums[k]=nums[i];
                nums[i]=temp;
                k++;
            }
        }
        return nums;
        
    }
};
