/*
Enter your query here.
*/
select salary*months as total, COUNT(*)
from employee
group by total
order by total desc
LIMIT 1
