-- Write your PostgreSQL query statement below
select s.student_id,s.student_name,sub.subject_name,count(e.subject_name) as attended_exams 
from  Students s
CROSS JOIN Subjects sub
LEFT JOIN Examinations e
ON s.student_id = e.student_id AND sub.subject_name = e.subject_name
group by s.student_id ,sub.subject_name,s.student_name
order by s.student_id,sub.subject_name

/*
Synced seamlessly with LeetHub Pro
Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna
*/