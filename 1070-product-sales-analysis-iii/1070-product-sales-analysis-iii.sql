-- Write your PostgreSQL query statement below

SELECT 
    product_id,
    min_year AS first_year,
    quantity,
    price

FROM (
    SELECT 
    *,
    MIN(year) OVER(PARTITION BY product_id) min_year
    FROM Sales s
)sub WHERE year=min_year

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/