// https://www.geeksforgeeks.org/problems/sum-of-odd-and-even-elements3033/1?page=5&difficulty=School&sortBy=submissionsp

// Code

class Solution {
  public:
    vector<int> findSum(int n) {
        // Code here
        int odd_sum = 0;
        int even_sum = 0;
        for(int i=1;i<=n;i++){
            if(i%2==0) {
                even_sum += i;
            }
            else{ 
                 odd_sum +=i;
                }
        }
        return {odd_sum, even_sum};
    }
};

/*
                    TEST CASES

Input: n = 5
Output: 9 6

Input: n = 6
Output: 9 12

*/