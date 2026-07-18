-- Write your PostgreSQL query statement below
SELECT user_id , COUNT(follower_id) AS followers_count from Followers GROUP BY user_id order by user_id asc

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/