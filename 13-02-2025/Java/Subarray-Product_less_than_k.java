class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        if (k <= 1) return 0; // Handle edge case

        int cnt = 0;
        
        for (int i = 0; i < nums.length; i++) {
            int product = 1; // Reset product for each subarray start
            
            for (int j = i; j < nums.length; j++) {
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
}
