class Solution {
public:

    long long stair_count(long long n,long long a,long long b){
        if (n==1) return a; 
        return stair_count(n-1,b,a+b);
    }
    int climbStairs(int n) {
        return stair_count(n,1,2);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna