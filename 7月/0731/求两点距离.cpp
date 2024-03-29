
/*20190730  类和对象  求任意3点构成的三角形面积*/
#include<iostream>
#include"point.h"
#include <string>
#include <cmath>
using namespace std;

Point::Point(double x, double y) //利用带参数构建函数初始化 xCoord 和 yCoord
{
	xCoord = x;
	yCoord = y;
}
Point::~Point() //利用带参数构建函数初始化 xCoord 和 yCoord
{

}
double Point::getxCoord()
{
	return xCoord;
}
double Point::getyCoord()
{
	return yCoord;
}
double triangle::getlenth(Point a, Point b)//求两点之间距离
{
	double L = sqrt((a.getxCoord() - b.getxCoord())*(a.getxCoord() - b.getxCoord()) + (a.getyCoord() - b.getyCoord())*(a.getyCoord() - b.getyCoord()));//  两点距离公式 : AB=√((x1-x2)^2+(y1-y2)^2)

	return L;
}
double triangle::getslope(Point a, Point b)//求斜率，判断是否构成一个三角形
{
	double L;
	if ((a.getxCoord() - b.getxCoord()) == 0)
	{
		cout << "点（" << a.getxCoord() << "," << a.getyCoord() << ") 坐标和" << "点（" << b.getxCoord() << "," << b.getyCoord() << ") 坐标在Y轴上" << endl;
		return -1;
	}
	else
	{
		L = (a.getyCoord() - b.getyCoord()) / (a.getxCoord() - b.getxCoord());
	}

	return L;
}
//
void triangle::getCoord(Point p[]) //取类Point的数组 p[4]，调用函数 getCoord（）输出四个点的坐标
{
	for (int i = 0; i < 3; i++)
	{
		cout << "第" << i + 1 << "个点的坐标是（" << p[i].getxCoord() << "," << p[i].getyCoord() << ")" << endl;
	}
}

triangle::triangle() :L(0), M(0), N(0)
{

}

triangle::~triangle()
{

}
double triangle::getarea() //求面积
{
	double s = (L + M + N) / 2;
	double area = sqrt(s*(s - L)*(s - M)*(s - N));
	return area;
}

int main()
{
	double m = 0, n = 0;
	int tag = 0;
	Point p[3];                                        //调用无参数构造函数初始化数组	
	triangle r;
	do{
		for (int i = 0; i < 3; i++)
		{
			cout << "请输入第" << i + 1 << "个点的x轴坐标" << endl;
			cin >> m;
			cout << "请输入第" << i + 1 << "个点的y轴坐标" << endl;
			cin >> n;
			p[i] = Point(m, n);                            //调用带参数构造函数对数组赋值
		}
		if (r.getslope(p[0], p[1]) == r.getslope(p[2], p[1]))
		{
			tag = 1;
			cout << "输入的三点坐标不构成三角形，请重新输入！" << endl;
		}
		else
			tag = 0;
	} while (tag);

	r.getCoord(p);
	r.L = r.getlenth(p[0], p[1]);//  两点距离公式 : AB=√((x1-x2)^2+(y1-y2)^2)
	r.M = r.getlenth(p[0], p[2]);
	r.N = r.getlenth(p[2], p[1]);
	cout << "三角形面积：" << r.getarea() << endl;
	return 0;

}
