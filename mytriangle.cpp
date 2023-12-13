#include<iostream>
#include"mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	if ((side2 + side3 > side1)&& (side1 + side2 > side3 )&&( side1 + side2 > side3))
	{
		return true;
	}
	else
	{
		return false;
	}
}

double double_area(double side1, double side2, double side3)
{
	double s, area;
	s = (side1 + side2 + side3) / 2;
	area = sqrt(s * (s - side1) * (s - side2) * (s - side3));
	return area;
}
int main() {
	double side1, side2, side3;
	cout << "请输入三角形的三条边：" << endl;
	cin >> side1 >> side2 >> side3;
	if (is_valid(side1, side2, side3))
	{
		cout << "这个三角形的面积为：" <<double_area(side1,side2,side3)<< endl;
	}
	else
	{
		cout << "错误信息" << endl;
	}
}