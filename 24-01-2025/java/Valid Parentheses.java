//https://leetcode.com/problems/valid-parentheses/description/

//code
class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();

        for (char c : s.toCharArray()) {
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            }
           else if (stack.isEmpty() ||
                    (c == ')' && stack.pop() != '(') ||
                    (c == '}' && stack.pop() != '{') ||
                    (c == ']' && stack.pop() != '[')) {
                return false;
            }
        }
    return stack.isEmpty();
    }
}



// test cases
// Example 1:
// Input: s = "()"
// Output: true
// Example 2:
// Input: s = "()[]{}"
// Output: true
// Example 3:
// Input: s = "(]"
// Output: false
// Example 4:
// Input: s = "([])"
// Output: true
