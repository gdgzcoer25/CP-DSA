// https://www.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1

//Code

class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int>result;
        int n = arr.size();
        for(int i=0;i<n;i+=2){
            result.push_back(arr[i]);
        }
        return result;
    }
};

/*    Test Cases

Input: arr[] = [1, 2, 3, 4]
Output: 1 3

Input: arr[] = [1, 2, 3, 4, 5]
Output: 1 3 5

*/
