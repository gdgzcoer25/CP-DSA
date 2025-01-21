// https://codeforces.com/problemset/problem/798/A

// code
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    int n = s.size();
    int mismatch_count = 0;

    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - i - 1]) {
            mismatch_count++;
        }
    }
    if (mismatch_count == 1 || (mismatch_count == 0 && n % 2 == 1)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}


// Test-Case

//add tc below in comments 

/*
Test Case 1: 
   Input: abccaa
   Output: YES
   Explanation: Changing 'a' at the last position makes it a palindrome.

   Test Case 2:
   Input: abbcca
   Output: NO
   Explanation: More than one change is needed to make it a palindrome.

   Test Case 3:
   Input: abcda
   Output: YES
   Explanation: Changing the middle character 'd' makes it a palindrome.

   Test Case 4:
   Input: a
   Output: YES
   Explanation: A single character is always a palindrome.

   Test Case 5:
   Input: abc
   Output: NO
   Explanation: More than one change is required to make it a palindrome.  
   */