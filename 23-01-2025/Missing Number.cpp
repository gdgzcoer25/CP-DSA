// https://leetcode.com/problems/missing-number/description/

//Code

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(); 
        int total_sum = n * (n + 1) / 2;  
        int sum = 0;
        
        
        for(int num : nums) {
            sum += num;
        }
        
        return total_sum - sum;
    }
};


//Test Cases
/*
Input: nums = [3,0,1]
Output: 2

Input: nums = [0,1]
Output: 2

Input: nums = [9,6,4,2,3,5,7,0,1]
Output: 8
*/