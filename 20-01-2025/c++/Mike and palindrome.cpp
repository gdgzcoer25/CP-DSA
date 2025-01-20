// https://codeforces.com/problemset/problem/798/A

// code
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int count = 0, i = 0, n = str.size() - 1;
    for (i, n; i < n; i++, n--)
        if (str[i] != str[n])
            count++;
    if (count == 1 || (count == 0 && str.size() % 2 == 1))
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

// Test-Case
//add tc below in comments 
// Test: #1, time: 31 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
// Input
// abccaa
// Output
// YES
// Answer
// YES
// Checker Log
// ok answer is YES

// Test: #2, time: 31 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
// Input
// abbcca
// Output
// NO
// Answer
// NO
// Checker Log
// ok answer is NO

// Test: #3, time: 30 ms., memory: 4 KB, exit code: 0, checker exit code: 0, verdict: OK
// Input
// abcda
// Output
// YES
// Answer
// YES
// Checker Log
// ok answer is YES

// Test: #4, time: 15 ms., memory: 40 KB, exit code: 0, checker exit code: 0, verdict: OK
// Input
// kyw
// Output
// YES
// Answer
// YES
// Checker Log
// ok answer is YES

// Test: #5, time: 31 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
// Input
// fccf
// Output
// NO
// Answer
// NO
// Checker Log
// ok answer is NO

// Test: #6, time: 46 ms., memory: 0 KB, exit code: 0, checker exit code: 0, verdict: OK
// Input
// mnlm
// Output
// YES
// Answer
// YES
// Checker Log
// ok answer is YES

// Test: #7, time: 30 ms., memory: 8 KB, exit code: 0, checker exit code: 0, verdict: OK
// Input
// gqrk
// Output
// NO
// Answer
// NO
// Checker Log
// ok answer is NO

// Test: #8, time: 15 ms., memory: 60 KB, exit code: 0, checker exit code: 0, verdict: OK
// Input
// glxlg
// Output
// YES
// Answer
// YES
// Checker Log
// ok answer is YES
