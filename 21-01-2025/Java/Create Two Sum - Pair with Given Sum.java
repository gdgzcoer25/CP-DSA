

// Problem Link: https://www.geeksforgeeks.org/problems/key-pair5616/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

import java.util.Arrays;

class Solution {
    public boolean twoSum(int[] arr, int target) {
        // Sort the array
        Arrays.sort(arr);
        int left = 0;
        int right = arr.length - 1;

        // Use two pointers to find the target sum
        while (left < right) {
            int sum = arr[left] + arr[right];
            if (sum == target) {
                return true; // Pair found
            } else if (sum < target) {
                left++; // Move left pointer to increase the sum
            } else {
                right--; // Move right pointer to decrease the sum
            }
        }

        return false; // No pair found
    }
}


//Test cases
// Input: arr[] = [1, 4, 45, 6, 10, 8], target = 16
// Output: true

// Explanation: arr[3] + arr[4] = 6 + 10 = 16.
// Input: arr[] = [1, 2, 4, 3, 6], target = 11
// Output: false

// Explanation: None of the pair makes a sum of 11.
// Input: arr[] = [11], target = 11
// Output: false
// Explanation: No pair is possible as only one element is present in arr[].

// Constraints:
// 1 ≤ arr.size ≤ 105
// 1 ≤ arr[i] ≤ 105
// 1 ≤ target ≤ 2*105
// 1 ≤ target ≤ 2*105
