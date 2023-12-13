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
	cout<<"第一天共摘了"<<monkey(peach)<<"个桃子";
	return 0;
}