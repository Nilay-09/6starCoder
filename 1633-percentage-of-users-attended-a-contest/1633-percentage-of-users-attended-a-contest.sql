-- Write your PostgreSQL query statement below
SELECT r.contest_id,
ROUND(COUNT(user_id) *100 /(SELECT COUNT(user_id)*1.0 FROM Users),2) AS percentage
FROM Register r
GROUP BY r.contest_id 
ORDER BY COUNT(user_id) *100 /(SELECT COUNT(user_id)*1.0 FROM Users) DESC,
r.contest_id ASC




/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/