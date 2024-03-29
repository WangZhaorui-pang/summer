# 学习笔记

## 学习C++

1. 类继承
   * 类继承是C++提供的一种高层次的代码重用机制：能够从已有的类派生出新的类，前者称为基类，后者称为继承类（派生类）。
   * 通过类继承机制：可以在已有类的基础上添加功能，可以给新类添加数据属性，可以更改类方法的行为


2. 派生类的声明

```
class 派生类名：继承方式  基类名
{
        成员声明；
}
```


3. 继承方式

```
不同继承方式的影响主要体现在：
派生类成员对基类成员的访问权限,通过派生类对象对基类成员的访问权限
三种继承方式
  公有继承 (public)
  私有继承 (private)
  保护继承 (protected)
```


4. 单继承和多继承

   * 基类与派生类的对应关系
   * 单继承:派生类只从一个基类派生。
   * 多继承:派生类从多个基类派生

5. 友元函数
 
   * 友元函数：一个类的友元函数是定义在类外部的一个函数，它不是类的成员函数，但可访问类的私有成员变量

   * 友元函数的特点：声明在类体内，时在函数的类型说明符前加friend。定义在类体外，定义格式和普通函数相同。它是非成员函数，调用与普通函数相同。它可以直接访问该类中的私有成员

   * 友元函数是在类声明中由关键字friend修饰说明的非成员函数，在它的函数体中能够通过对象名访问 private 和 protected成员
   * 作用：增加灵活性，使程序员可以在封装和快速性方面做合理选择。
   * 访问对象中的成员必须通过对象名。

   ```
    其格式如下：
	friend <类型> <友元函数名> （<参数表>）；
    虽然类中有友元函数的原型，但是友元仍然不是成员函数
   ```

6. 友元类

   * 友员类通常设计为一种对数据操作或类之间传递消息的辅助类.
   * 将一个类声明为另一个类的友元类定义的一般格式如下：
            friend class 友元类名;
   * 当一个类作为另一类的友元类时，类的所有成员函数都是另一类的友元函数。

7. 异常处理

   * C++语言中：
		try、throw和catch语句就是用于实现异常处理的机制的程序子句：
   1. 确定要保护的代码段：确定要保护的代码段、（敏感代码）的工作由try子句来实现。如果预料某段代码可能出现异常，就将此段代码放在try语句块中。这段代码在运行时真的出现了错误，就通过其中的throw语句抛掷异常对象的类型和异常的内容。

   2. 抛掷异常
	抛掷异常的工作由throw子句来实现，在受保护的可能产生异常的语句中进行错误检测，如有异常就通过throw语句抛掷异常对象的类型和异常的内容。

   3. 定义异常处理程序
	通过throw抛掷的异常对象和异常内容，被catch子句捕获，并处理捕获的异常对象。即将出现异常后对异常的处理语句放在catch语句块中，捕捉异常并处理，catch子句起到了异常处理器的作用。




