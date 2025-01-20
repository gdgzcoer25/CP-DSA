// https://codeforces.com/problemset/problem/798/A

// code:-
  import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next();  
        int len = s.length();
        int mismatchCount = 0;
        for (int i = 0; i < len / 2; i++) {
            if (s.charAt(i) != s.charAt(len - i - 1)) {
                mismatchCount++; 
            }
        }
        if (mismatchCount == 1 || (mismatchCount == 0 && len % 2 == 1)) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }
    }
}

// Test-Case:-
// Input
//   abccaa
// Output
//   YES
// Input
//   abbcca
// Output
//   NO
// Input
//   abcda
// Output
//   YES
  
  
//explanation:-
   
// This program determines whether a string can be turned into a palindrome by modifying at most one character.
//   A palindrome is a string that reads the same forward and backward. To check this, the program compares characters 
//   from both ends of the string, moving inward toward the center. It counts the number of mismatched character pairs—where 
//   the character at position i from the start does not match the character at position i from the end.If there is exactly one
//   mismatch, it is possible to make the string a palindrome by changing one of the mismatched characters, so the output is "YES." 
//   If there are no mismatches, the string is already a palindrome. For strings with an odd length, the middle character can still
//   be freely changed, and the output is "YES." However, for even-length strings with no mismatches, no changes are allowed while 
// preserving the palindrome property, so the output is "NO." If there are more than one mismatch,
//   it is impossible to make the string a palindrome with a single modification, resulting in "NO."
 
//   For example, the string "abca" has one mismatch between 'b' and 'c,' so it can be turned into a palindrome by changing either
//   of these characters, and the output is "YES." The string "racecar" has no mismatches, so it is already a palindrome, and the output
//   is "YES." However,the string "abcd" has two mismatches, so it cannot be made into a palindrome with a single change, and the output is "NO."
