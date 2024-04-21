--Trigger on Insert Data in Employee Table
CREATE TRIGGER onInsert 
AFTER INSERT ON Employee
FOR EACH ROW
BEGIN
   UPDATE Customers SET updatedOn=GETDATE() ;
END;

--Trigger on Update  Data in Employee Table

CREATE TRIGGER onUpdate
AFTER UPDATE ON Employee 
FOR EACH ROW 
BEGIN
UPDATE Employee SET updatedOn=CURRENT_TIMESTAMP;
END;
