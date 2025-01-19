-- 코드를 입력하세요
SELECT p.*
FROM
    PLACES p
WHERE
    HOST_ID IN (
        SELECT HOST_ID
        FROM PLACES
        GROUP BY HOST_ID
        HAVING COUNT(*) >= 2
)
ORDER BY
    p.ID;