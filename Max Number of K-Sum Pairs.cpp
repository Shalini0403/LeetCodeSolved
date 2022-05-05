/*
Approach:
1. We take a dictionary and keep the count of all integers in nums array, then reduce the frequency for the pairs which satisfy the given condition(sum to k).
2. We traverse through the whole array, if (k- current_element) is present we decrease the count of (k-current_element). Here, we additionally dont increase the count of(current_element) because it is a part of the satisfying pair.
3. And if(k- current_element) is missing then simply increase the count of curent-element. 
 4. Time Complexity: Since ir is one pass: O(N)
 5. Space complexity: Using the hashmap to store for all integers in nums, so O(N)
/*
class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        //a dictionary to store value and frequency
        unordered_map<int, int> table;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            //The element to be searched for current nums[i] is stored in temp
            int temp=k-nums[i];
            if(table[temp]>0)
            {
                count++;
                table[temp]--; //because one pair to be used ony once
            }
            else
                table[nums[i]]++; //increasing freq of current value because remained unused
            
        }
        return count;
        
    }
};
