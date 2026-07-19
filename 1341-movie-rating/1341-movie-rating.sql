-- Write your PostgreSQL query statement below
(SELECT u.name AS results      
FROM MovieRating m
LEFT JOIN Users u
ON u.user_id=m.user_id
GROUP BY u.name,m.user_id
ORDER BY count(m.user_id) DESC, u.name ASC
LIMIT 1
)
UNION ALL

(SELECT m.title AS result
FROM MovieRating r
LEFT JOIN Movies m
ON r.movie_id=m.movie_id
WHERE created_at BETWEEN '2020-02-01' AND '2020-02-29'    
GROUP BY r.movie_id,m.title
ORDER BY AVG(rating) DESC , m.title ASC
LIMIT 1
)

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/