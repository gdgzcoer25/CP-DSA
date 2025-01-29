//https://codeforces.com/contest/26/problem/A

// Code

#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    
    vector<int> primeDivisors(n + 1, 0);
 
    for (int i = 2; i <= n; i++) {
        if (primeDivisors[i] == 0) { 
            for (int j = i; j <= n; j += i) {
                primeDivisors[j]++;  
            }
        }
    }
 
   
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (primeDivisors[i] == 2) {
            count++;
        }
    }
 
    cout << count << endl;
 
    return 0;
}


// Testcases:-
// Input:  10
// Output: 2

// Input: 21
// Output: 8
