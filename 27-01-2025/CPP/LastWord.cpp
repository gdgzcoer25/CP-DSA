// https://leetcode.com/problems/length-of-last-word/description/

//Code

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int end = n - 1;
        while (end >= 0 && s[end] == ' ') {
            end--;
        }
        
        int start = end;
        while (start >= 0 && s[start] != ' ') {
            start--;
        }
        
        return end - start;

    }
};


/*  TEST CASES

Example 1:
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Example 2:
Input: s = "   fly me   to   the moon  "
Output: 4
Explanation: The last word is "moon" with length 4.

Example 3:
Input: s = "luffy is still joyboy"
Output: 6
Explanation: The last word is "joyboy" with length 6.

*/