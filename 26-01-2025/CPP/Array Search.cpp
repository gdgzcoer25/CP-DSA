//https://www.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/0

class Solution {
  public:

    int search(vector<int>& arr, int x) {
    
      for(int i=0;i<arr.size();i++){
          if(arr[i] == x){
              
              return i;
          }
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