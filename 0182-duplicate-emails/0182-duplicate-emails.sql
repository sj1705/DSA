# # Write your MySQL query statement below
# SELECT email, COUNT(*) as num_duplicates
# FROM Person
# GROUP BY email
# HAVING COUNT(*) > 1;
SELECT email
FROM Person
GROUP BY email
HAVING COUNT(*) > 1;