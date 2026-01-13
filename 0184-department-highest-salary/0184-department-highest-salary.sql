-- Write your PostgreSQL query statement below
select Department,Employee,Salary  from (
    select d.name AS Department,
    e.name AS Employee,
    e.salary AS Salary,
    rank() over(partition by d.name order by e.salary desc) as rnk
    from Employee e JOIN Department d ON e.departmentId=d.id
) 
where rnk=1