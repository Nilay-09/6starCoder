SELECT
    CONCAT(TO_CHAR(trans_date, 'YYYY'),'-',TO_CHAR(trans_date, 'MM')) AS month    ,
    country,
    (count(trans_date)) AS trans_count,
    SUM(CASE WHEN state='approved' THEN 1 ELSE 0 END) AS approved_count,
    SUM(amount) AS trans_total_amount,
    SUM(CASE WHEN state='approved' THEN amount ELSE 0 END) AS approved_total_amount
FROM Transactions 
GROUP BY country,TO_CHAR(trans_date, 'YYYY'),TO_CHAR(trans_date, 'MM')

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/