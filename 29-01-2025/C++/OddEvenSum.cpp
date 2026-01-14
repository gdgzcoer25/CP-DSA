// https://www.geeksforgeeks.org/problems/sum-of-odd-and-even-elements3033/1?page=5&difficulty=School&sortBy=submissionsp

// Code
class Solution {
  public:
    vector<int> findSum(int n) {
        // Code here
        int odd = 0;
        int even = 0;
        vector<int>ans;
        int i = 1;
        while( i<=n){
            if(i & 1){
                odd +=i;
                i++;
            }
            else{
               even += i; 
               i++;
            }
        }
        
        ans.push_back(odd);
        ans.push_back(even);
        
        return ans;
        
        
    }
};


/*
                    TEST CASES

Input: n = 5
Output: 9 6

Input: n = 6
Output: 9 12

*/