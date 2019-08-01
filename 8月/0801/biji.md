# 学习python

## 文件和异常

### 读文件
 f = open("filePath","mode")
 mode:
 r: 只读 read
 a: 插入append 保留之前数据，并将新数据放在最后的数据
 w: 写  write ，默认清楚所有内容然后写  
 + 读写

 * 读
 read()  函数     默认读取所有文件内容
 read(size)  读取指定字节内容
 readline()   读一行数据
 readlines()   读取所有行数据，并且将每行的数据作为列表中的元素，返回list
 \n\r  换行符


 * 写

 write(content)    写入内容  

 ### 读写操作流程
 1. 打开文件  f = open(path,"mode“)
 2. 读写操作  f.read()  /  f.write()
 3. 关闭文件  f.close()


### with... 
* 结束之后会自动关闭
with open(filepath,"mode")  as  f:
    f.read()   /   f.write(something)


###  异常 

try:
    code
except Exception:
    ...
finally:  /可选
    ...

* Exception 捕获所有异常
* 内置的异常类型，ZeroDivisionError、NameError、IndexError


### 练习
1. 
```
  a = [1,"1",2,"2"]
  print(a[0]+a[1])
```
```
try:
    a = [1,"1",2,"2"]
    print(a[0]+a[1])
except TypeError as te:
    print("int不能与str相加",te)
finally:
    print("最后执行的操作")

```


2. 
```
a = {"name":"zhaorui","age":22}
print(a[ages])
```

```
try: 
    a = {"name":"zhaorui","age":22}
    print(a[ages])

except NameError as ne:
    print("未定义",ne)
```




3. 
```
a=[1,2,3,4,5]
b=(1,2,3,4,5)
print (a+b)
```

```
try: 
    a=[1,2,3,4,5]
    b=(1,2,3,4,5)
    print (a+b)

except TypeError as te:
    print("te")
finally:
    print("最后执行的操作")
```



