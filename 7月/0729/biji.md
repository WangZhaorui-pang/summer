# 学习日报

## 学习web相关知识

### 已理解函数定义的一般形式

1. 无参函数的定义形式：
```
　类型说明  函数名（）  
 　{函数体}
 ```

2. 有参函数的定义形式：
```
　类型说明  函数名（形式参数说明）  
 　{函数体}
```

3. 空函数的定义形式：
```
　类型说明  函数名（形式参数说明）  
 　{　}
```


4. 举例说明
```
Int max(int,int)
int main()
{ int a,b,c;
   cin>>a>>b;
   c=max(a,b);
   cout<<“max is ”<<c<<endl;
   return 0;
} int max(int x, int y)
{ int z;
   z=(x>y)? x:y;
   return(z);
}
```

### 函数声明

* 函数的声明被称为函数的原型，它的形式为：

```
      返回类型  函数名（参数表）；
```


### 函数调用

```

#include <iostream>
using namespace std;

//函数申明
int max(int a, int b); 
main()
   {
     int x, y;

     cin >> x >> y;

    //函数调用
     cout << max(x ,y );
   }

//函数实现
int max(int a, int b)
    {
       if (a > b) return(a); else return(b);
    } 

```



* 输入三个整数（1-100之间），并求其和

```
#include<iostream>
using namespace std;
int funcSum(int data[3])
{
	int sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum = sum + data[i];
	}
	return sum;
}

int main()
{
	int data[3];
	int j;
	for (int i = 0; i <= 3; i++)
	{
		cout << "请输入一个整数（1-100）：";
		cin >> j;
		if ((j > 0) && (j < 100))
		{
			data[i] = j;
		}
		else
		{
			cout << "数值超出范围" << endl;
			data[i] = 0;
		}
	}
	int sum = funcSum(data);
	cout<< "数据总和：" << sum << endl;
	return 0;
	}

```

### 内联函数

1. C++提供了一种高效方式：在编译时将所调用函数的代码直接嵌入到调用函数中，而不是流程转出去，这种被调用函数叫内联函数。

2. 指定内联函数只需在函数首行的左端加一个“inline”关键字。

3. 基本形式
```
……
inline int max(int, int);
int main(){
int i=1, j=20;
cout<<max(i, j);
}
inline int max(int a, int b){
if(a<b){ a=b;}
return a;
}
```

### 函数重载
* 例 ：编写一个程序，用来求两个整数或三个整数中的最大数。
```
#include<iostream>
using namespace std;
int max(int a,int b,int c)
{ 
 if(b>a)  a=b;
    if(c>a)  a=c;
    return a;
 }
int max(int a,int b)
{ 
 if(a>b) return a;
    else return b;
}
int main()
{   int a=8,b=-12,c=27;
    cout<<“max(a,b,c)=”<<max(a,b,c)<<endl;
    cout<<“max(a,b)=”<<max(a,b)<<endl;
}
```

### 函数模板
1. 函数模板可以用来创建一个通用功能的函数，以支持多种不同形参，进一步简化重载函数的函数体设计。

2. 声明方法
```
template <typename 标识符>
函数声明
```

### 递归函数

* 在函数调用中，有这样两种情况，一种是在函数A的定义中有调用函数A的语句，即自己调用自己；另一种是函数A的定义中出现调用函数B的语句，而函数B的定义中也出现调用函数A的语句，即相互调用。前者称直接递归，后者称间接递归。本节只介绍直接递归。递归函数必须定义递归终止条件（Stopping condition），避免无穷递归（Infinite Recursion）。

```
#include<iostream>
using namespace std;

int fac(int n){
	if (n == 0 || n == 1)
		return 1;
	else return n*fac(n - 1);
}

void main()
{
	cout << "请输入一个整数：";
	int n;
	cin >> n;

	cout << fac(n) << endl;
	
}
```

## 学习JAVA相关知识

### 几种变量

1. 成员变量：包含静态变量（有static修饰）和实例变量（无static修饰），用this.修饰

2. 静态变量（又称全局变量、类变量）：可在任何地方调用，用 类名. 修饰

3. 实例变量：在实例方法中可直接调用，其它用new调用。

4. 局部变量：不用修饰，有两种分布方式：
```
public void rt(String s){
    String f="adda";
}
```

```
public class test {
public static int id;
public int zx;
public void qw() {
	int id=1;
	test.id=id;
}

public static void er() {
	System.out.println();
}
public void rt() {
	test.er();
	id=1;
	zx=1;
	System.out.println();
	
}
public static void main(String[] args) {
	test.er();
	test test=new test();
	test.qw();
	
}
}
```

### JAVA 回顾

1. 基本类型
  * double比float 精度高

2. 关键字
* 不能用关键字作变量名、方法名、包名、项目名

3. 强类型语言和弱类型语言

4. 遍历数组
```
for (type element:array)
{
    System.out.println (element);
}
```
  


