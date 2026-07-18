-- Write your PostgreSQL query statement below

--need to group by by queryname
--if rating less than 3 then needs to capture that count
--rating/position for all and plus for quality

SELECT 
    query_name,
    ROUND((SUM(rating *1.0 /position)/COUNT(query_name)),2) AS quality,
    ROUND(
        (SUM(CASE WHEN rating<3 THEN 1 ELSE 0 END) *100.0/COUNT(query_name)),2) 
        AS poor_query_percentage 
FROM Queries 
WHERE query_name is not null
GROUP BY query_name


/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/