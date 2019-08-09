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
 
sql_delete ="delete from wangzhaorui where id = %d"
 
try:
	cur.execute(sql_delete % (133))  #像sql语句传递参数
	#提交
	db.commit()
except Exception as e:
	#错误回滚
	db.rollback() 
finally:
	db.close()
