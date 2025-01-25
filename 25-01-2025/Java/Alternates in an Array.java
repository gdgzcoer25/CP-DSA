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
