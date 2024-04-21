CREATE FUNCTION getHighestSalary()
RETURNS INT
AS
BEGIN
  DECLARE maxAmount INT;
  
  SELECT maxAmount = MAX(amount) FROM ORDERS;

  RETURN maxAmount;
END;
