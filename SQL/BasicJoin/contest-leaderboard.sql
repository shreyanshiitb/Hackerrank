/*
Enter your query here.
*/


SELECT h.hacker_id,
       h.name,
       Sum(top) AS total
FROM   hackers AS h
       INNER JOIN(SELECT hacker_id,
                         challenge_id,
                         Max(score) AS top
                  FROM   submissions
                  GROUP  BY hacker_id,
                            challenge_id
                  ORDER  BY top DESC) AS s
               ON h.hacker_id = s.hacker_id
GROUP  BY h.hacker_id,
          h.name
HAVING total > 0
ORDER  BY total DESC,
          h.hacker_id 
