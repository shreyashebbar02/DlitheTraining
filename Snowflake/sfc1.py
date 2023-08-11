import snowflake.connector

ctx=snowflake.connector.connect(
    user='shreyaskumar',
    password='thisistheway@1S',
    account='zvfhcvp-td40526'
)
a=str(input())
b=input()
cs=ctx.cursor()
try:
    cs.execute("use bank_db")
    cs.execute("use schema bank_db.Schema1")
    # cs.execute("create table if not exist bank_db.Schema1.user(name varchar(25),id int);" )
    cs.execute("insert into bank_db.Schema1.user values('"+a+"',"+b+");")
finally:
    cs.close()
ctx.close()