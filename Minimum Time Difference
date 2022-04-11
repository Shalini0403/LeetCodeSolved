class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        
        /*converting the time in string to int and in same unit for subtraction*/
        vector<int> store_time;
        for(int i=0;i<timePoints.size();i++)
        {
            string h0=timePoints[i].substr(0,2);
            int h1=stoi(h0);
            string m0=timePoints[i].substr(3,2);
            int m1=stoi(m0);
            int t=h1*60+m1;
            store_time.push_back(t);
        }
        /* store_time has all times stores in minutes*/
        sort(store_time.begin(),store_time.end());
        /* for the counter to 1 minute difference in next day case 24*60= total number of mins in 24 hr span.*/
        store_time.push_back(store_time[0]+(24*60));
        /*sorting so that difference is calculated only for consecutive elements*/
        int mini=INT_MAX;
        /*finding min diff in vector*/
        for(int i=1;i<store_time.size();i++)
        {
            int temp=store_time[i]-store_time[i-1];
            if(temp<mini)
                mini=temp;
        }
        return mini;
    }
};
