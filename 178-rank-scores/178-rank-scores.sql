select score,
(select count(distinct(score))
 from Scores where score >= s.score) `rank` 
 from Scores s 
 order by `rank`;