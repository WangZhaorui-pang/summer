# 学习日报

## 学习Java相关知识

* 已理解

1. void 称为返回值，只要有void就是方法

2. 成员变量有默认值，可以不用赋值；局部变量就必须赋值。

3. 静态变量：静态方法中不能调用非静态变量，非静态方法。若想在静态方法中调用非静态变量，需要创建一个实例。

4. 普通方法可以调用普通方法、普通变量、静态方法静态变量。

5. 静态代码块：只执行一次的类的初始化，只能放在方法外

6. 继承


```
public class Test{
    public static void main(String[] args) {
        Student s = new Student("xuxiao",180,"Java");
        s.rest();
        s.study();
    }
}
class Person {
    String name;
    int height;
    public void rest(){
        System.out.println("休息一会！");
    }   
}
class Student extends Person {
    String major; //专业
    public void study(){
        System.out.println("在安大，学习Java");
    }   
    public Student(String name,int height,String major) {
        //天然拥有父类的属性
        this.name = name;
        this.height = height;
        this.major = major;
    }
}
```
* 先执行父类构造器，再执行子类构造器

* 父类.java文件中 必须要有无参构造器

## 学习C++相关知识

* 已理解
1. 面向对象的基本概念
```
人类的定义：
	struct  HUMANKIND{
		char   	 *name;
		double 	 weight;
	public:
		void   	 eat( );
		void  	 wear( );
		void  	 reside( );
		void  	 travel( );
     };
人类的实例：HUMANKIND   people;
```

2. 抽象的实例----钟表类
```
class  Clock
{
        public: 
             void setTime(int NewH,  int NewM, int NewS);             void showTime（ ）;
        private: 
              int Hour,Minute,Second;
};
```

3. 类的声明形式：
```
类是一种用户自定义类型，声明形式：
class 类名称
{
       public:
                 公有成员（外部接口）
       private:
                 私有成员(只能在类中{ }被访问)
       protected:
                 保护型成员
}
```

4. 构造函数

* 构造函数的作用:构造函数是一种特殊的成员函数，被声明为公有成员，其作用是为类的对象分配内存空间，进行初始化。

* 构造函数的性质：构造函数的名字必须与类的名字相同。
构造函数没有返回值，不能定义返回类型，包括void型在内。
对象定义时，编译系统会自动地调用构造函数完成对象内存空间的分配和初始化工作。

* 构造函数是类的成员函数，具有一般成员函数的所有性质，可访问类的所有成员，可以是内联函数，可带有参数表，可带有默认的形参值，还可重载。


5. 拷贝构造函数

```
拷贝构造函数是一种特殊的构造函数，其形参为本类的对象引用。
class 类名
{  public :
       类名（形参）；//构造函数
       类名（类名 &对象名）；//拷贝构造函数
           ...
}；
类名:: 类名（类名 &对象名）//拷贝构造函数的实现
{    函数体    }
```

6. 类模板
```
template  <模板参数表> 
类声明
使用类模板使用户可以为类声明一种模式，使得类中的某些数据成员、某些成员函数的参数、某些成员函数的返回值，能取任意类型（包括系统预定义的和用户自定义的）。
```
