//https://leetcode.com/problems/count-and-say/description/
//code:-
class Solution {
    public String countAndSay(int n) {
       
        String current = "1";

        
        while (--n > 0) {
            
            StringBuilder nextSequence = new StringBuilder();


            for (int i = 0; i < current.length();) {
                int count = 0;
                char ch = current.charAt(i); 

           
                while (i < current.length() && current.charAt(i) == ch) {
                    i++;
                    count++;
                }

                
                nextSequence.append(count).append(ch);
            }

            
            current = nextSequence.toString();
        }

        
        return current;
    }
}
// Testcases:=
// Example 1:

// Input: n = 4

// Output: "1211"

// Explanation:

// countAndSay(1) = "1"
// countAndSay(2) = RLE of "1" = "11"
// countAndSay(3) = RLE of "11" = "21"
// countAndSay(4) = RLE of "21" = "1211"
// Example 2:

// Input: n = 1

// Output: "1"

// Explanation:

// This is the base case.
