// https:/leetcode.com/problems/maximum-ascending-subarray-sum/submissions

// CODE
class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0];  
        int maxSum = sum;   
        int currentSum = sum;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > nums[i - 1]) {
                currentSum += nums[i];  
            } else {
                maxSum = max(maxSum, currentSum);  
                currentSum = nums[i];  
            }
        }
        maxSum = max(maxSum, currentSum);  

        return maxSum;
    }
};
 
/*
        TEST CASES

Input: nums = [10,20,30,5,10,50]
Output: 65

Input: nums = [10,20,30,40,50]
Output: 150

Input: nums = [12,17,15,13,10,11,12]
Output: 33

*/ 