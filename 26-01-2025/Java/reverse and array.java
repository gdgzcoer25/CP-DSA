//https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/0

static int search(int arr[], int x) {
        // Iterate through the array
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] == x) { // Check if the current element matches x
                return i; // Return the index if found
            }
        }
        // If x is not found in the array
        return -1;
    }

//Test Cases
// Input: arr[] = [1, 2, 3, 4], x = 3
// Output: 2


// Input: arr[] = [10, 8, 30, 4, 5], x = 5
// Output: 4

// Input: arr[] = [10, 8, 30], x = 6
// Output: -1