// https://leetcode.com/problems/add-digits


//  CODE
class Solution {
public:
    int addDigits(int num) {
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;  
                num /= 10;      
            }
            num = sum;  
             }
        return num;  
    }
};

//      TEST CASES

/*
Input: num = 38
Output: 2

Input: num = 0
Output: 0

*/