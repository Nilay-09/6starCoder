class Solution {
public:
    static int numOfStrings(vector<string>& patterns, string word) {
        string_view s(word);
        int cnt=0;
        for(string_view p: patterns){
            cnt+=s.find(p)!=-1;
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna