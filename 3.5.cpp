#include<iostream>
using namespace std;
int monkey(int peach)
{
	for (int d = 0; d < 9; d++)
	{
		peach =(peach+1)*2;
	}
	return peach;
}
int main() {
	int peach = 1;
	cout<<"��һ�칲ժ��"<<monkey(peach)<<"������";
	return 0;
}