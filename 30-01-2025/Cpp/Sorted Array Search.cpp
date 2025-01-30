//https://www.geeksforgeeks.org/problems/who-will-win-1587115621/0

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find element in sorted array
    // arr: input array
    // k: element to be searched
    bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        int s = 0;
        int e = arr.size()-1;
        
        while(s <= e){
            int mid = (s+e)/2;
            
            if(arr[mid] == k){
                return true;
            }
            
            else if(arr[mid] > k){
                e = mid-1;
            }
            else if(arr[mid] < k){
                s = mid+1;
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