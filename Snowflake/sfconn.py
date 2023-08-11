import snowflake.connector

ctx=snowflake.connector.connect(
    user='shreyaskumar',
    password='thisistheway@1S',
    account='zvfhcvp-td40526'
)
cs=ctx.cursor()
try:
    rs=cs.execute("select *from bank_db.schema1.bank;")
    for row in rs:
        print(row)
finally:
    cs.close()
ctx.close()