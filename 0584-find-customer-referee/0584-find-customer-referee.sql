-- Write your PostgreSQL query statement below
select c.name 
From Customer c 
where c.referee_id !=2  OR c.referee_id IS NULL

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/