// https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/0

//Code

#include<bits/stdc++.h>
using namespace std;


class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(vector<int>& arr, int x) {

        // Your code here
        for(int i=0;i<arr.size();i++){
            if(arr[i]== x ) return i;
        }
        return -1;
    }
};

//Test Cases
// Input: arr[] = [1, 2, 3, 4], x = 3
// Output: 2


// Input: arr[] = [10, 8, 30, 4, 5], x = 5
// Output: 4

// Input: arr[] = [10, 8, 30], x = 6
// Output: -1