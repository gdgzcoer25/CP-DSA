class Solution {
    public boolean isValid(String s) {
        Stack<Character> stack = new Stack<>();

        for(char c : s.toCharArray()){
            if(c == '(' || c == '[' || c == '{'){
                stack.push(c);
            }
            else{
                if(stack.isEmpty() ||
                (c==')' && stack.peek() != '(') ||
                (c == ']' && stack.peek() != '[') ||
                (c == '}' && stack.peek() != '{')){
                    return false;
                }
                stack.pop();
            }
        }
        return stack.isEmpty();
    }
    public void main(String args[]){
        System.out.println(isValid("()"));    
        System.out.println(isValid("()[]{}"));    
        System.out.println(isValid("(]"));       
        System.out.println(isValid("([])"));
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