//www.geeksforgeeks.org/problems/who-will-win-1587115621/0

// Code

class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        for(int i=0;i<arr.size();i++){
            if(arr[i] == k) {
                return true;
                break;
            }
        }
        return false;
    }
};

//Test Cases
// Input: arr[] = [1, 2, 3, 4, 6], k = 6
// Output: true


// Input: arr[] = [1, 2, 4, 5, 6], k = 3
// Output: false

// Input: arr[] = [2, 3, 5, 6], k = 1
// Output: false