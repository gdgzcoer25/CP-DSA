//https://www.geeksforgeeks.org/problems/reverse-an-array/0


class Solution {
    public void reverseArray(int arr[]) {
        int left = 0;
        int right = arr.length - 1;
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

// Test Cases
// Input: arr = [1, 4, 3, 2, 6, 5]
// Output: [5, 6, 2, 3, 4, 1]

// Input: arr = [4, 5, 2]
// Output: [2, 5, 4]

// Input: arr = [1]
// Output: [1]