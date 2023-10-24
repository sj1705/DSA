SELECT B.id
FROM Weather A JOIN Weather B ON A.recordDate = B.recordDate - INTERVAL 1 DAY
WHERE B.temperature > A.temperature