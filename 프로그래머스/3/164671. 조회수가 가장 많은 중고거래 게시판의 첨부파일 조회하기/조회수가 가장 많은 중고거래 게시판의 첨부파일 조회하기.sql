-- 코드를 입력하세요
SELECT
    CONCAT('/home/grep/src/', gb.BOARD_ID, '/', gf.FILE_ID, gf.FILE_NAME, gf.FILE_EXT) AS FILE_PATH
FROM
    USED_GOODS_FILE gf
    JOIN (
        SELECT
            BOARD_ID
        FROM
            USED_GOODS_BOARD
        ORDER BY
            VIEWS DESC
        LIMIT 1
    ) gb ON gf.BOARD_ID=gb.BOARD_ID
ORDER BY
    gf.FILE_ID DESC;