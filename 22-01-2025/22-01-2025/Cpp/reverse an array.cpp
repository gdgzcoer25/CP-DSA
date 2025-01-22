//https://www.geeksforgeeks.org/problems/reverse-an-array/0

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int i=0;
        int j=arr.size()-1;
        while(i<=j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
};

//Test Cases
// Input: arr = [1, 4, 3, 2, 6, 5]
// Output: [5, 6, 2, 3, 4, 1]

// Input: arr = [4, 5, 2]
// Output: [2, 5, 4]

// Input: arr = [1]
// Output: [1]