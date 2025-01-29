//https://www.geeksforgeeks.org/problems/who-will-win-1587115621/0

#include<bits/stdc++.h>
using namespace std;

bool searchInSorted(vector<int>& arr, int k) {

        // Your code here
        int s = 0;
        int e = arr.size()-1;
        int m = s+(e-s)/2;
        
        while(s <= e){
            if(arr[m] == k)return true;
            
            else if(arr[m] < k)s=m+1;
            
            else e=m-1;
            
            m = s+(e-s)/2;
        }
        return false;
}

//Test Cases
// Input: arr[] = [1, 2, 3, 4, 6], k = 6
// Output: true


// Input: arr[] = [1, 2, 4, 5, 6], k = 3
// Output: false

// Input: arr[] = [2, 3, 5, 6], k = 1
// Output: false