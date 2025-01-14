-- 코드를 입력하세요
SELECT
    ap.APNT_NO as APNTNO,
    pt.PT_NAME as PTNAME,
    ap.PT_NO as PTNO,
    ap.MCDP_CD as MCDPCD,
    doc.DR_NAME as DRNAME,
    ap.APNT_YMD as APNTYMD
FROM
    APPOINTMENT ap
    JOIN PATIENT pt
        ON ap.PT_NO=pt.PT_NO
    JOIN DOCTOR doc
        ON ap.MDDR_ID=doc.DR_ID
WHERE
    ap.APNT_CNCL_YN='N'
    AND ap.MCDP_CD='CS'
    AND DATE(ap.APNT_YMD)='2022-04-13'
ORDER BY
    ap.APNT_YMD ASC;
    