# Write your MySQL query statement below
select t.id from Weather t JOIN Weather y ON DATEDIFF(t.recordDate,y.recordDate)=1
where t.temperature > y.temperature 

-- Synced seamlessly with LeetHub Pro
-- Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
-- Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna