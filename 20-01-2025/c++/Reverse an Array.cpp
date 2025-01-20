// https://www.geeksforgeeks.org/problems/reverse-an-array/0

// code
#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr) {
        // code here
    int i = 0;
    int j = arr.size()-1;
    while(i <= j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}


// Test-Case
//Test case 1-> Input: arr = [1, 4, 3, 2, 6, 5]
// Output: [5, 6, 2, 3, 4, 1]

//Test case 2-> Input: arr = [4, 5, 2]
// Output: [2, 5, 4]
//add tc below in comments 