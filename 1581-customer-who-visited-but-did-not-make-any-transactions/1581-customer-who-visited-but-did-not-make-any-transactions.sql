-- Write your PostgreSQL query statement below
select v.customer_id,count(v.customer_id) as count_no_trans 
FROM Visits v LEFT JOIN Transactions t
ON v.visit_id=t.visit_id
where t.visit_id IS NULL
GROUP BY v.customer_id

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/