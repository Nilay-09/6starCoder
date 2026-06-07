SELECT
    a.machine_id,
    ROUND(AVG(b.timestamp - a.timestamp)::numeric, 3) AS processing_time
FROM Activity a
JOIN Activity b
    ON a.machine_id = b.machine_id
   AND a.process_id = b.process_id
   AND b.activity_type = 'end'
   AND a.activity_type = 'start'
GROUP BY a.machine_id;

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/