-- Last updated: 04/07/2026, 02:02:05
# Write your MySQL query statement below
select name
from Customer
where referee_id != 2
or referee_id IS null