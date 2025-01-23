// Quesstion Link: https://www.geeksforgeeks.org/problems/print-alternate-elements-of-an-array/1

import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Integer> getAlternates(List<Integer> arr) {
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < arr.size(); i++) {
            if (i % 2 == 0) {
                ans.add(arr.get(i));
            }
        }
        return ans;
    }
}

// Input: arr[] = [1, 2, 3, 4]
// Output: 1 3
// Explanation:
// Take first element: 1
// Skip second element: 2
// Take third element: 3
// Skip fourth element: 4


// Input: arr[] = [1, 2, 3, 4, 5]
// Output: 1 3 5
// Explanation:
// Take first element: 1
// Skip second element: 2
// Take third element: 3
// Skip fourth element: 4
// Take fifth element: 5


// Constraints:
// 1 <=  arr.size <= 105
// 1 <= arr[i] <= 105
