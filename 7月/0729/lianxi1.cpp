
/*int max(int a, int b, int c);
main()
{
int x, y;
cin >> x >> y;
cout << max(x + 5, y - 3);

}
int max(int a, int b)

*/




/*#include<iostream>
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
*/

/*
//函数模板（重载申明多个，模板申明一个就可以）
#include<iostream>
using namespace std;
template<typename T>
T abs(T x)
{
	return x < 0 ? -x : x;
}
void main()
{
	int n = -5;
	double d = -5.5;
	cout << abs(n) << endl;
	cout << abs(d) << endl;
}
*/

/*#include<iostream>
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
	
}*/


#include<iostream>
#include<cmath>
using namespace std;

#define pi 3.1415926

void three(){
	double a, b, c, m, area;
	cout << "请输入三角形的边长以空格隔开：" << endl;
	cin >> a >> b >> c;
	if (a + b > c&&a + c > b&&b + c > a)
	{
		m = (a + b + c) / 2;
		area = sqrt(m*(m - a)*(m - b)*(m - c));
		cout << "三角形的面积：" << area << endl;
	}
	else 
		cout << "输入边长构不成三角形" << endl;
}

void circular(){
	double r,area;
	cout << "请输入圆形的半径：" << endl;
	cin >> r;
	area = pi * r * r;
	cout << "圆形的面积：" << area << endl;
}

void  rectangle(){
	double a, b, area ;
	cout << "请输入长方形的边长以空格隔开：" << endl;
	cin >> a >> b;
	area = a * b;
	cout << "长方形的面积为：" << area << endl;
}

int main()
{
	cout << "请输入一下数字代表计算不同的图形面积：" << endl;
	cout << "    1. 三角形   2. 圆形    3. 长方形     " << endl;
	int a;
	do{
		cin >> a;
		switch (a)
		{
		    case 1:three(); break;
			case 2:circular(); break;
			case 3:rectangle(); break;
			default: cout << "输入的数字不对，应在1 2 3中选取！" << endl;
				break;
		}
	} while (a != 1 && a != 2 && a != 3);
	return 0;
}