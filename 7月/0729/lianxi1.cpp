
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
		cout << "������һ��������1-100����";
		cin >> j;
		if ((j > 0) && (j < 100))
		{
			data[i] = j;
		}
		else
		{
			cout << "��ֵ������Χ" << endl;
			data[i] = 0;
		}
	}
	int sum = funcSum(data);
	cout<< "�����ܺͣ�" << sum << endl;
	return 0;
	}
*/

/*
//����ģ�壨�������������ģ������һ���Ϳ��ԣ�
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
	cout << "������һ��������";
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
	cout << "�����������εı߳��Կո������" << endl;
	cin >> a >> b >> c;
	if (a + b > c&&a + c > b&&b + c > a)
	{
		m = (a + b + c) / 2;
		area = sqrt(m*(m - a)*(m - b)*(m - c));
		cout << "�����ε������" << area << endl;
	}
	else 
		cout << "����߳�������������" << endl;
}

void circular(){
	double r,area;
	cout << "������Բ�εİ뾶��" << endl;
	cin >> r;
	area = pi * r * r;
	cout << "Բ�ε������" << area << endl;
}

void  rectangle(){
	double a, b, area ;
	cout << "�����볤���εı߳��Կո������" << endl;
	cin >> a >> b;
	area = a * b;
	cout << "�����ε����Ϊ��" << area << endl;
}

int main()
{
	cout << "������һ�����ִ�����㲻ͬ��ͼ�������" << endl;
	cout << "    1. ������   2. Բ��    3. ������     " << endl;
	int a;
	do{
		cin >> a;
		switch (a)
		{
		    case 1:three(); break;
			case 2:circular(); break;
			case 3:rectangle(); break;
			default: cout << "��������ֲ��ԣ�Ӧ��1 2 3��ѡȡ��" << endl;
				break;
		}
	} while (a != 1 && a != 2 && a != 3);
	return 0;
}