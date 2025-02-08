// https://leetcode.com/problems/plus-one/description/

//Code
class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int n = digits.size();
            for(int i=n-1;i>=0;i--){
                if(i== n-1) digits[i]++;
                if(digits[i]== 10){
                    digits[i] = 0;
                    if(i!=0) digits[i-1]++;
                    else{
                        digits.push_back(0);
                        digits[i] = 1;
                    }
                }
            }
            return digits;
        }
};

/*  TEST CASES

Input: digits = [1,2,3]
Output: [1,2,4]

Input: digits = [4,3,2,1]
Output: [4,3,2,2]

Input: digits = [9]
Output: [1,0]

*/