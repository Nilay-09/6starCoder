class Solution {
public:
    void generate_permute(vector<int>& arr, vector<vector<int>> &ans, int idx) {
        if (arr.size() == idx) {
            ans.push_back(arr);
            return;
        }

        for (int i = idx; i < arr.size(); i++) {

            swap(arr[i], arr[idx]);
            generate_permute(arr, ans, idx+1);
            swap(arr[i], arr[idx]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {

        vector<vector<int>> ans;
        generate_permute(nums, ans, 0);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna