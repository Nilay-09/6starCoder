-- Write your PostgreSQL query statement below
SELECT DISTINCT num as ConsecutiveNums 
FROM (
    SELECT
    LEAD(num) Over(Order by id) as Ahead,
    LAG(num) Over(Order by id) as Behind,
    num
    FROM Logs
)t WHERE Ahead=num And Behind=num

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/