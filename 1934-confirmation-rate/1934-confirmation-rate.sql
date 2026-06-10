-- Write your PostgreSQL query statement below
select s.user_id, round(avg(case 
when action = 'confirmed' then 1
else 0 end),2) as confirmation_rate
from signups s left join confirmations c
on s.user_id = c.user_id
group by s.user_id

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/