-- Write your PostgreSQL query statement below
select e.name from Employee e JOIN Employee m
ON e.id=m.managerId 
group by e.name,e.id
HAVING count(e.id)>=5

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/