SELECT email AS Email
FROM Person
GROUP BY email
HAVING COUNT(email) > 2 OR COUNT(email) = 2;
