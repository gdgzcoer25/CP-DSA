//https://www.geeksforgeeks.org/problems/reverse-an-array/0

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int n = arr.size();
        
        if(n==1) return;
        
        int left =0;
        int right=n-1;
        
        while(left<=right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        return ;
    }
};


/*Test Cases
Input: arr = [1, 4, 3, 2, 6, 5]
Output: [5, 6, 2, 3, 4, 1]

Input: arr = [4, 5, 2]
Output: [2, 5, 4]

Input: arr = [1]
Output: [1]
*/
