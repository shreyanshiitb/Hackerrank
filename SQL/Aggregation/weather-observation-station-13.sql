select round(SUM(LAT_N),4)
from station
where LAT_N>38.7880 AND LAT_N<137.2345
