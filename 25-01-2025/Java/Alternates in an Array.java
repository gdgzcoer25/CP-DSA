import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<Integer> getAlternates(List<Integer> arr) {
        List<Integer> ans = new ArrayList<>();
        for (int i = 0; i < arr.size(); i += 2) {
            ans.add(arr.get(i));
        }
        return ans;
    }
}
