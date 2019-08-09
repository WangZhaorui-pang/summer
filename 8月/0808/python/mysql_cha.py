import pymysql.cursors  #导入 pymysql
 
#打开数据库连接
db= connection = pymysql.connect(host='47.96.175.196',
                                port=3307,
                                user='root',
                                password='ahulock2018',
                                db='learning',
                                charset='utf8mb4',
                                cursorclass=pymysql.cursors.DictCursor)

cur = db.cursor()
 
#1.查询操作
# 编写sql 查询语句  user 对应我的表名
sql = "select * from wangzhaorui"
try:
	cur.execute(sql) 	#执行sql语句
 
	results = cur.fetchall()	#获取查询的所有记录
	print("id","fullName","age")
	#遍历结果
	for row in results :
		id = row[0]
		fullName = row[1]
		age= row[2]
		print(id,fullName,age)
except Exception as e:
	raise e
finally:
	db.close()
