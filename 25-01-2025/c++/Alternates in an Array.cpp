

class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        // code here
        vector<int> ans;
        for(int i=0;i<arr.size();i+=2){
            ans.push_back(arr[i]);
        }
        
        return ans;
    }
};

class Solution {
  public:
    vector<int> getAlternates(vector<int> &arr) {
        vector<int>ans;
       for(int i=0;i<arr.size();i++){
         if(i%2==0){
             ans.push_back(arr[i]);
         }
         else {
             continue;
         }
       }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input); // Read the entire line for the array elements
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution sln;
        vector<int> list = sln.getAlternates(arr);
        for (int i : list)
            cout << i << " ";
        cout << endl;
        cout << "~" << endl;
    }

    return 0;
}
