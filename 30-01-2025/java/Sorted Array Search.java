//https://www.geeksforgeeks.org/problems/who-will-win-1587115621/0

static boolean searchInSorted(int arr[], int k) {
        int left = 0, right = arr.length - 1;
        
        while (left <= right) {
            int mid = left + (right - left) / 2;
            
            if (arr[mid] == k) {
                return true; // Element found
            } else if (arr[mid] < k) {
                left = mid + 1; // Search in the right half
            } else {
                right = mid - 1; // Search in the left half
            }
        }
        
        return false; // Element not found
    }

//Test Cases
// Input: arr[] = [1, 2, 3, 4, 6], k = 6
// Output: true


// Input: arr[] = [1, 2, 4, 5, 6], k = 3
// Output: false

// Input: arr[] = [2, 3, 5, 6], k = 1
// Output: false