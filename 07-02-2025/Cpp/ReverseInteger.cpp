//https://leetcode.com/problems/reverse-integer/description//

class Solution {
public:
    int reverse(int x) {
        int result = 0;
        if (x == INT_MIN) {
            return 0;
        }
        int sign = (x < 0) ? -1 : 1;  
         x = abs(x);
        
        while (x != 0) {
            int digit = x % 10;
            x /= 10;
            
            if (result > INT_MAX / 10 || (result == INT_MAX / 10 && digit > 7)) {
                return 0;  
            }
            
            result = result * 10 + digit;
        }
        
        return sign * result;  
    }
};

/*  TEST CASES

Input: x = 123
Output: 321

Input: x = -123
Output: -321


Input: x = 120
Output: 21
*/