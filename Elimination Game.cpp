class Solution {
public:
    
    int recursive_call(int n) {
        if (n <= 2) 
            return n - 1;
        if (n % 2 == 1) 
            return n - 2 - 2 * recursive_call((n-1)/2);
        else 
            return n - 1 - 2 * recursive_call(n/2);
    }
    int lastRemaining(int n) {
        return recursive_call(n) + 1;
    }
    
};
