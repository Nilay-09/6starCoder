SELECT p.product_id,
       COALESCE(t.new_price, 10) AS price
FROM (
    SELECT DISTINCT product_id
    FROM Products
) p
LEFT JOIN (
    SELECT DISTINCT ON (product_id)
           product_id,
           new_price
    FROM Products
    WHERE change_date <= '2019-08-16'
    ORDER BY product_id, change_date DESC
) t
ON p.product_id = t.product_id;

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/