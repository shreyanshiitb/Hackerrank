/*
Enter your query here.
*/
select round(SUM(LAT_N),2), round(SUM(LONG_W),2)
from station
