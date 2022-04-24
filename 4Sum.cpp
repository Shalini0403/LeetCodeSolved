class Solution {
public:
    vector<vector<int> > fourSum(vector<int> &num, int target) {
    
        vector<vector<int> > ans;
    
        if (num.empty())
            return ans;
    
        sort(num.begin(),num.end());
    
        for (int i = 0; i < num.size(); i++) {
        
            int target_c = target - num[i];
        
            for (int j = i + 1; j < num.size(); j++) {
            
                int target_b = target_c - num[j];
            
                int ptr3 = j + 1;
                int ptr4 = num.size() - 1;
            
                while(ptr3 < ptr4) {
                
                    int two_sum = num[ptr3] + num[ptr4];
                
                    if (two_sum < target_b) ptr3++;
                
                    else if (two_sum > target_b) ptr4--;
                
                    else {
                    
                        vector<int> temp(4, 0);
                        temp[0] = num[i];
                        temp[1] = num[j];
                        temp[2] = num[ptr3];
                        temp[3] = num[ptr4];
                        ans.push_back(temp);
                    
                        // checking if same elemnts for ptr 3
                        while (ptr3 < ptr4 && num[ptr3] == temp[2]) ++ptr3;
                    
                        // checking if same elemets for pt4
                        while (ptr3 < ptr4 && num[ptr4] == temp[3]) --ptr4;
                
                    }
                }
                
                while(j + 1 < num.size() && num[j + 1] == num[j]) ++j;
            }
            while (i + 1 < num.size() && num[i + 1] == num[i]) ++i;
        
        }
    
        return ans;
    
    }
};
