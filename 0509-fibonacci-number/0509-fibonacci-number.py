def get_fib_number(n):
    if n == 0 or n == 1:
        return n

    return get_fib_number(n - 1) + get_fib_number(n - 2)


class Solution:
    def fib(self, n: int) -> int:
        return get_fib_number(n)

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna