#include<iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
         int n = arr.size();

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i != j) { 
                    if (arr[i] + arr[j] == target) {
                        return true; 
                    }
                }
            }
        }

        return false;
    }
};
