#csv写入 ccc.csv文件中
import csv
with open("ccc.csv","w",encoding="utf-8",newline ="")  as csvfile:
    writer=csv.writer(csvfile)
    writer.writerow(["姓名","年龄","性别"])
    writer.writerows([["王兆瑞",21,"女"],["黄蓉",21,"女"],["张三",22,"男"],["李四",18,"男"],["王二麻子",22,"男"]]) 





""" 
#从test.csv文件中读取
import csv
with open("test.csv","r",encoding='UTF-8') as csvfile:
    reader = csv.reader(csvfile)
    for line in reader:
        print (line)

 """



""" 
# json写入result.json文件中
import json
f = open('result.json','w')
result = []
temp = {}
temp['name'] = 'fang'
temp['age'] = 12
temp['sex'] = ['male']
result.append(temp)
f.write(json.dumps(result,ensure_ascii=False))

 """

""" 
#从result.json文件中读取
import json
f = open("C:\\Users\\User\\Desktop\\暑期培训\\8月\\0801\\python\\result.json")
t = json.load(f)
str = t[0]['name']
print (str) 
"""