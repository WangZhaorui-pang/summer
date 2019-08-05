# 学习日报

## 学习MySQL相关知识

* 已理解
1. MySQL简介

   * MySQL是一个小型关系型数据库管理系统，开发者为瑞典MySQL AB公司。目前属于 Oracle 旗下产品，被广泛地应用在Internet上的中小型网站中。由于其体积小、速度快、总体拥有成本低，尤其是开放源码这一特点，许多中小型 网站为了降低网站总体拥有成本而选择了MySQL作为网站数据库。

2. MySQL优点

   * 性能快捷、优化SQL语言
   * 容易使用
   * 多线程和可靠性
   * 多用户支持
   * 可移植和开放源代码
   * 遵循国际标准和国际化支持
   * 为多种编程语言提供API

3. MySQL常用命令行

   * 连接mysql

```
    格式： mysql -h主机地址 -u用户名 －p用户密码
```

   * 启动mysql服务:  net start mysql

   * 停止mysql服务:  net stop mysql

   * 查询端口是否冲突:  netstat –na | findstr 8080 查看被监听的端口 , findstr用于查找后面的端口是否存在。

   * 退出mysql:  quit或者exit退出
   
   * 修改密码：
```
     格式：mysqladmin -u用户名 -p旧密码 password 新密码
     例如给root修改密码：
         mysqladmin -u root -p ab12 password djg345 
```

4. MySQL相关语句（增、查、改、删）
 * 增
```
 insert into xiao(fullName,age,card,school) values('王兆瑞',21,'P19201049','安徽大学')
```

 * 查
```
select * from xiao where id=1

select * from xiao where id in(value1,value2…)
 
select * from xiao ORDER BY id desc(asc)
```

 * 改
```
 update xiao  set fullName='黄蓉' where id=2

```

 * 删
```
 delete from xiao where id=1


truncate table 表名
```



## 学习java

1. 抽象方法只能在抽象类里

2. 抽象方法不能在非抽象类里

3. 在接口中若方法里面没有 abstract public ,则会默认是这种状态。

4. javabean ：属性用private修饰，方法用get set方式，此方法是为了不让某类用户修改属性。



