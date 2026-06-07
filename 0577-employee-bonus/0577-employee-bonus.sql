-- Write your PostgreSQL query statement below
select e.name,b.bonus from Employee e
LEFT JOIN Bonus b ON e.empId=b.empId
where b.bonus<1000 OR b.bonus is null       

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/