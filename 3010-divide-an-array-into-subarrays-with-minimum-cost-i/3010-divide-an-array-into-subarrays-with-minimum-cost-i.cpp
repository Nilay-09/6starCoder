class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int a = INT_MAX, b = INT_MAX;

        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < a) swap(nums[i], a);
            if (nums[i] < b) swap(nums[i], b);
        }
        return nums[0] + a + b;
    }
};
