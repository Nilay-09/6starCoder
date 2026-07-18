-- Write your PostgreSQL query statement below
SELECT 
    e.employee_id,
    e.name,
    count(m.employee_id) AS reports_count,
    ROUND(AVG(m.age)) AS average_age      
FROM Employees e
INNER JOIN Employees m
ON e.employee_id =m.reports_to  
GROUP BY e.employee_id,e.name
ORDER BY e.employee_id

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/