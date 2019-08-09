import pymysql.cursors

# Connect to the database
connection = pymysql.connect(host='47.96.175.196',
                             port=3307,
                             user='root',
                             password='ahulock2018',
                             db='learning',
                             charset='utf8mb4',
                             cursorclass=pymysql.cursors.DictCursor)

try:
    with connection.cursor() as cursor:
        # Create a new record
        sql = "INSERT INTO `wangzhaorui` (`fullName`, `age`,`card`,`school`,`grade`) VALUES (%s, %s, %s, %s, %s)"
        cursor.execute(sql, ('wangzhaorui', '21','p19201049','安徽大学','60'))

    # connection is not autocommit by default. So you must commit to save
    # your changes.
    connection.commit()
  
finally:
    connection.close()              
                                
