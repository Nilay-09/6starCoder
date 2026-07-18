SELECT ROUND(COUNT(*)*1.0/(SELECT count(DISTINCT player_id) from Activity),2) AS fraction  
FROM (
    SELECT DISTINCT a1.player_id
    FROM Activity a1
    JOIN Activity a2 
    ON a1.player_id = a2.player_id 
    AND a2.event_date = a1.event_date + 1
    WHERE a1.event_date = (SELECT MIN(event_date) FROM Activity WHERE player_id = a1.player_id)
) subquery


/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/