-- Write your PostgreSQL query statement below
select a.machine_id,ROUND(AVG(b.timestamp-a.timestamp)::numeric,3) as processing_time 
from Activity a JOIN Activity b ON a.machine_id=b.machine_id
where a.activity_type ='start' AND b.activity_type ='end'
group by a.machine_id

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/