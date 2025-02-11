//https://leetcode.com/problems/count-and-say/description/

class Solution {
    public:
        string countAndSay(int n) {
        if (n == 1) return "1";
        string result = "1";
        for (int i = 2; i <= n; i++) {
            string temp = "";
            int count = 1;
            for (int j = 1; j < result.length(); j++) {
                if (result[j] == result[j - 1]) {
                    count++;
                } else {
                    temp += to_string(count) + result[j - 1];
                    count = 1; 
                }
            }
            temp += to_string(count) + result[result.length() - 1];
            result = temp;
        }
        
        return result;
    }
};

/*   TEST CASES

Input: n = 4
Output: "1211"
Explanation:
countAndSay(1) = "1"
countAndSay(2) = RLE of "1" = "11"
countAndSay(3) = RLE of "11" = "21"
countAndSay(4) = RLE of "21" = "1211"

Example 2:
Input: n = 1
Output: "1"
Explanation: This is the base case.


*/