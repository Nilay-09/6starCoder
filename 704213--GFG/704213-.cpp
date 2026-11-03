class Solution {
public:

    int getAllSubsetHavingTargetSum(
        vector<int>& arr, int sum, int idx, int target)
    {
        if (idx == arr.size())
        {
            return (sum == target) ? 1 : 0;
        }

        // Don't include
        int exclude = getAllSubsetHavingTargetSum(
            arr, sum, idx + 1, target);

        // Include
        int include = getAllSubsetHavingTargetSum(
            arr, sum + arr[idx], idx + 1, target);

        return include + exclude;
    }

    int perfectSum(vector<int>& arr, int target)
    {
        return getAllSubsetHavingTargetSum(arr, 0, 0, target);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna