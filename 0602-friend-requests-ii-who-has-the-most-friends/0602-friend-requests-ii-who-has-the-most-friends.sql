-- Write your PostgreSQL query statement below
WITH temp as 
(SELECT requester_id as id FROM RequestAccepted
UNION ALL
SELECT accepter_id as id FROM RequestAccepted)

SELECT id,COUNT(id) as num FROM temp GROUP BY id 
ORDER BY num DESC LIMIT 1

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/