class Solution {
public:

    int ways(vector<int>& arr, int idx, int target) {
        if (target == 0) return 1;

        if (target < 0 || idx == arr.size()) return 0;

        int take = ways(arr, idx, target - arr[idx]);

        int notTake = ways(arr, idx + 1, target);

        return take + notTake;
    }

    int count(vector<int>& coins, int sum) {
        return ways(coins, 0, sum);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna