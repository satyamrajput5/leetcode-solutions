-- Last updated: 04/07/2026, 02:01:57
# Write your MySQL query statement below
select distinct author_id as id
from Views
where author_id = viewer_id
order by author_id