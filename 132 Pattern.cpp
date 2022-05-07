class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        
        int high_ele = INT_MIN;
        stack<int> store;
        for( int i = nums.size()-1; i >= 0; i -- ){
            if( nums[i] < high_ele ) 
                return true;
            else 
                while( !store.empty() && nums[i] > store.top() ){ 
                    high_ele = store.top(); store.pop(); 
            }
            store.push(nums[i]);
        }
        return false;
    }
};
