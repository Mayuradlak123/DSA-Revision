SELECT salary FROM Table_Name  ORDER BY salary LIMIT 1 OFFSET (SELECT COUNT(*) FROM Table)-2;