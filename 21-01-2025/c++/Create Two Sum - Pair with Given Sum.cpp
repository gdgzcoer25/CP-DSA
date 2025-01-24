

// https://www.geeksforgeeks.org/problems/key-pair5616/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
     int left=0;
     int right = arr.size()-1;
     while(left<right){
         if(arr[left]+arr[right]==target){
             return 1;
         }
         else if(arr[left]+arr[right]<target)left++;
         else right--;
     }
     return 0;
    }
};




//Input: arr[] = [1, 4, 45, 6, 10, 8], target = 16
//Output: true
//Explanation: arr[3] + arr[4] = 6 + 10 = 16.

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
