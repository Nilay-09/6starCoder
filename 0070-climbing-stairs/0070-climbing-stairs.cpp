class Solution {
public:

    int climbStairs(int n) {
       long long prev=1;
       long long curr=2;

       if(n==1|| n==2) return n;

       for(int i=3;i<=n;i++){
        long long sum=prev+curr;
        prev=curr;
        curr=sum;
       }
       return curr;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna