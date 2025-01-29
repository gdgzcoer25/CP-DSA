import java.util.*;

class Solution {
    public List<Integer> findSum(int n) {
        List<Integer> ans = new ArrayList<>();
        int odd = 0;
        int even = 0;

        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                even += i;
            } else {
                odd += i;
            }
        }

        ans.add(odd);
        ans.add(even);
        return ans;
    }

    public static void main(String[] args) {
        Solution solution = new Solution();
        int n = 10;  // Example input
        List<Integer> result = solution.findSum(n);
        System.out.println("Odd Sum: " + result.get(0));
        System.out.println("Even Sum: " + result.get(1));
    }
}
