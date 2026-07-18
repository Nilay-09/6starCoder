-- Write your PostgreSQL query statement below
SELECT 
        ROUND(COUNT(*) * 100.0 / (SELECT COUNT(DISTINCT customer_id) FROM Delivery), 2) AS immediate_percentage
FROM (
    SELECT *,
    ROW_NUMBER() OVER(PARTITION BY customer_id ORDER BY order_date) AS rank
    FROM Delivery
)
WHERE order_date=customer_pref_delivery_date AND rank=1

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/