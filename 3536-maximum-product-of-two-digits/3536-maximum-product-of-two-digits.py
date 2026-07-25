class Solution:
    def maxProduct(self, n: int) -> int:
        v = [int(x) for x in str(n)]
        v.sort(reverse=True)
        return v[0]*v[1]
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna