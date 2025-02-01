//https://leetcode.com/problems/search-in-rotated-sorted-array/description/
//code:-

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = -1;
        int low =0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            //checking right part of the array
            if (nums[mid]==target){
                ans = mid;
                return ans;
            }
            else if(nums[mid]>=nums[low]){ 
                if(target >= nums[low] && target < nums[mid]){
                    high = mid-1;
                }
                else{
                    low = mid +1;
                }  
            }
            else{
               if (target > nums[mid] &&  target <=nums[high]) low = mid +1;
               else high = mid -1;
            }
        }
        return ans ;
    }
};

// testcases:-
// Example 1:

// Input: nums = [4,5,6,7,0,1,2], target = 0
// Output: 4
// Example 2:

// Input: nums = [4,5,6,7,0,1,2], target = 3
// Output: -1
// Example 3:

// Input: nums = [1], target = 0
// Output: -1
