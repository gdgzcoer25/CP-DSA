class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0; // Handle edge case

        int cnt = 0;
        
        for (int i = 0; i < nums.size(); i++) {
            int product = 1; // Reset product for each subarray start
            
            for (int j = i; j < nums.size(); j++) {
                product *= nums[j];

                if (product < k) {
                    cnt++;  // Valid subarray found
                } else {
                    break; // Stop expanding if product exceeds k
                }
            }
        }
        
        return cnt;
    }
};
