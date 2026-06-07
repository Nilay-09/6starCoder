-- Write your PostgreSQL query statement below
select w.name,w.population,w.area 
from World w
where w.area>=3000000 OR w.population>=25000000 

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/