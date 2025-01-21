// https://www.geeksforgeeks.org/problems/key-pair5616/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

//Code

#include<bits/stdc++.h>
using namespace std;

class Solution {
    public:
    // Brute force approach
    bool PairWithSum(const vector<int>& arr, int target) {
        int n = arr.size();
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if (arr[i] + arr[j] == target) {
                    return true;
                }
            }
        }
        return false;
    }

    // Optimal approach 
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < arr.size(); ++i) {
            int complement = target - arr[i];
            if (seen.count(complement)) {
                return true;
            }
            seen[arr[i]] = i; 
        }
        return false;
    }
};

int main() {
    Solution sol;
    vector<int> arr;
    int total_element;

    cout << "Enter total number of elements you want in the array?" << endl;
    cin >> total_element;

    for (int i = 0; i < total_element; i++) {
        int element;
        cout << "Enter the element you want to insert in the array?" << endl;
        cin >> element;
        arr.push_back(element);
    }

    int target;
    cout << "Enter the target you want to find?" << endl;
    cin >> target;

    // optimal solution
    if (sol.twoSum(arr, target)) {
        cout << "Optimal: Target Found" << endl;
    } else {
        cout << "Optimal: Target Not Found" << endl;
    }

    //  brute force solution
    if (sol.PairWithSum(arr, target)) {
        cout << "Brute Force: Target Found" << endl;
    } else {
        cout << "Brute Force: Target Not Found" << endl;
    }

    return 0;
}

/*
Test Case 1:
Input: Array = [1, 4, 45, 6, 10, 8], Target = 16
Expected Output: Target Found


Test Case 2:
Input: Array = [1, 2, 3, 4, 5], Target = 9
Expected Output: Target Found



Test Case 3:
Input: Array = [10, 20, 30, 40], Target = 100
Expected Output: Target Not Found


Test Case 4:
Input: Array = [5, 5, 5], Target = 10
Expected Output: Target Found

Test Case 5:
Input: Array = [1, 1, 1, 1], Target = 2
Expected Output:  Target Found
*/

