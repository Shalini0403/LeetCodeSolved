class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool> arr_store(n + 1, true);
		arr_store[0] = false;
		arr_store[1] = false;
		for (int i = 2; i * i <= n; i++) {
			if (arr_store[i]) {
				for (int j = i * i; j <= n; j += i) {
					arr_store[j] = false;
				}
			}
		}
		
		int count = 0;
		for (int i = 2; i < n; i++) {
			if (arr_store[i]) {
				count++;
			}
		}
		return count;
	}
};
