class Solution {
public:

    int winner(int n,int k){
        if(n==1) return 0;

        return (winner(n-1,k) + k)%n;
    }
    int findTheWinner(int n, int k) {
        return winner(n,k)+1;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna