class Solution {
public:
    int get_fib(int n, int a, int b) {
        if (n == 0) return a;

        return get_fib(n - 1, b, a + b);
    }

    int fib(int n) {
        return get_fib(n, 0, 1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna