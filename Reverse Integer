class Solution {
public:
    int reverse(int x) {
        
        long int ans=0,rem;
        long int z;
        z=abs(x);
        while(z>0)
        {
            rem=z%10;
            ans=ans*10+rem;
            if(ans < -2147483648 || ans > 2147483648) 
            return 0;
            z=z/10;
        }
        
        if (x>0)
            return ans;
        else
            return -ans;
        
        
    }
};
