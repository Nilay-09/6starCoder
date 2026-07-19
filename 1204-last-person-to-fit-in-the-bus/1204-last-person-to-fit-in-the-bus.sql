-- Write your PostgreSQL query statement below
WITH running_total_weight AS(
    SELECT *,
    SUM(weight) over(Order By turn) as running_weight
    FROM Queue
)

SELECT person_name 
FROM running_total_weight
WHERE running_weight<=1000
ORDER BY running_weight DESC
LIMIT 1


/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/