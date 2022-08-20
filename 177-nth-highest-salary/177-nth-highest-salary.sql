CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
declare M int;
set m = N-1;
  RETURN (
      SELECT(
          SELECT DISTINCT salary FROM Employee ORDER BY salary DESC LIMIT 1 OFFSET m
      )
      
  );
END