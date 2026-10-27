
class Solution {
  public:
    int countWays(int n) {
        // your code here
        long long f=1;
        long long s=2;
        long long t=4;
        if(n==1||n==2) return n;
        
        for(int i=4;i<=n;i++){
            long long sum=f+s+t;
            f=s;
            s=t;
            t=sum;
        }
        return t;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna