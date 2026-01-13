# Write your MySQL query statement below
SELECT w.id
FROM Weather w
WHERE w.temperature >
(
    SELECT y.temperature
    FROM Weather y
    WHERE y.recordDate = DATE_SUB(w.recordDate, INTERVAL 1 DAY)
);
