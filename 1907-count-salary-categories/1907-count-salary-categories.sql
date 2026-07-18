-- Write your PostgreSQL query statement below
SELECT 
    'Low Salary' AS category,
    COUNT(CASE WHEN income < 20000 THEN 1 END) AS accounts_count
FROM Accounts

UNION ALL

SELECT 
    'Average Salary' AS category,
    COUNT(CASE WHEN income >= 20000 AND income <= 50000 THEN 1 END) AS accounts_count
FROM Accounts

UNION ALL

SELECT 
    'High Salary' AS category,
    COUNT(CASE WHEN income > 50000 THEN 1 END) AS accounts_count
FROM Accounts;


/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/