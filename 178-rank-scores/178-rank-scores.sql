/* Write your T-SQL query statement below */
-- # Write your MySQL query statement below
 select score , dense_rank() over(order by score desc) as rank from Scores;
-- select Score, dense_rank() over(order by Score desc)from Scores as rank
