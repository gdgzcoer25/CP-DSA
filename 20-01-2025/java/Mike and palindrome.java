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
Input
  abccaa
Output
  YES
Input
  abbcca
Output
  NO
Input
  abcda
Output
  YES
  
  
//explanation:-
    the program read the string s from user using scanner , 
  then the length of string s is stored in var len . the reasone behind initializing the mismatchcount is to keep tract of 
  how many char are mismatched in the string from both ends . we use for loop to compare char from both ends of string s ,
  we are using .charAt(i) and .charAt(len-i-1) to get char from left and right respectively . 
  lets take example of string "abcda" 
  according to the code it will get stored in the s and len will strore value of 5 in it. mismatchcount remains 0. 
   in the for loop 
  starts with i=0 , we comapre charAt(0) with charAt(4) it gives no mismatch
  i=1 charAt(1) with charAt(3)  then mismatch count increases so mismatchcount=1
  here program checks the if condition , here mismatchcount==1 so it will return "yes"

   lets take another example of string "abcd" 
  according to the code it will get stored in the s and len will strore value of 4 in it. mismatchcount remains 0. 
  the for loop 
  starts with i=0 , we comapre charAt(0) with charAt(3) it gives  mismatchcount=1
  i=1 charAt(1) with charAt(2)  then mismatch count increases so mismatchcount=2
  here program checks the else  condition because  here mismatchcount=2 so it will return "no"
