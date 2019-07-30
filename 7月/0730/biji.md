# 学习日报

## 学习python 相关知识

### while 循环

while condition：
    xxxx(下一步操作)
    ...

* break 跳出此层循环
* continue 跳出本次循环


```
i=0
while i<10:
    i=i+1
    print(i)
    if i==5:
        break
    else:
        print(f"已经执行了{i}次")
        continue
        print("被跳出") 
```


* 任务：高斯求和  1+2+3+...100=?

```
#任务1
i=0
sum=0 
#i,sum=0,0
while i<100:
    i=i+1
    sum=sum+i
print (sum)
```


* 任务：求1-100内的奇数和？

```
#任务2
i=0
sum=0 

#i,sum=0,0
while i<100:
    i=i+1
    if (i%2!=0):
        sum=sum+i
    else:
        continue
print (sum)
```

###  for  循环
for element in ....(str、list、tuple、dict...)

* 遍历字符串里面的每个字符

``` 
# while的方式去遍历字符串里面的每个字符
 s = "helloworld！"
 s_len = len(s)
 i=0
 while i<s_len:
     print(s[i])
     i=i+1

#for in 循环方式去遍历字符串里面的每个字符
for i in s:
    print (i)
```


* 遍历列表中的每个元素
* 遍历元组中的每个元素
* 遍历字典中的每个元素（默认获取key）
* 遍历集合中的每个元素

```
#for 遍历列表中的每个元素
l=[1,2,3,"hello",32,false]
for i in l:
#for i in [1,2,3,"hello",32,false]：
    print (i)

#for 遍历元组中的每个元素
for i in (1,2,3,"hello",32,false)：
    print (i)


#for 遍历字典中的每个元素
d = {"name":"wangzhaorui","age":17}
for key in d:
    print(key,d[key])

#for 遍历集合中的每个元素
for i in set([1,2,3,"hello",32,false])：
    print (i)
```

### range 函数
生成指定范围的数组
range(100) 生成0-99中的所有数
range(start,stop,step)

```
#range函数
print(list(range(100)))

r1 = range(1,100,2)
print(list(r1))

for i in range(0,100,2):
    print (i)


# for 和range结合使用
l1=[1,2,3,4,5,6,7,8,9]
for i in range(0,len(l1),2):
    print(l1[i])

```


### 函数

* 写法

def funcName(param1，param=10，....)：
    xxx
    return xxxx #可选

* 参数：可变参数，默认参数
* 返回值：没有返回值，一个返回值，多个返回值

```
def print_result(val,result="你好"):
     print("result:",result)
     return val,result
r = print_result(1)
print(r)
```


### 模块

* 导入模块
import xxx
from xxx import ...

* 导入模块并重命名
import xxx as x
from xxx import ... as x

* 引用

```
import math
from math import sqrt


import math
import json
from math import sqrt,sin
result = sqrt(4)
print(result)

```
### 安装模块

* pip install xxx


设为默认

* 升级 pip 到最新的版本 (>=10.0.0) 后进行配置：

```bash
pip install pip -U
pip config set global.index-url https://pypi.tuna.tsinghua.edu.cn/simple
```

### 任务
* 使用flask库。建立一个网页
* 路由：/  该页面下显示 hello world
* 路由: /xxx   该页面显示 hello,xxx!




## 学习web相关知识