// https://leetcode.com/problems/subarray-product-less-than-k/

//CODE

class Solution {
    public:
        int numSubarrayProductLessThanK(vector<int>& nums, int k) {
            int n = nums.size();
        int count = 0;
        long product = 1;  
        int start = 0;
        
        for (int end = 0; end < n; end++) {
            product *= nums[end];
            
            while (start <= end && product >= k) {
                product /= nums[start];
                start++;
            }
            count += (end - start + 1);
        }
        
        return count;
        }
};

/*  TEST CASES

Input: nums = [10,5,2,6], k = 100
Output: 8

Input: nums = [1,2,3], k = 0
Output: 0


*/