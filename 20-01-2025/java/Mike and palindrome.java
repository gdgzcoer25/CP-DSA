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
  

