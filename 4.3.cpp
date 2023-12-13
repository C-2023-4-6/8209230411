#include<iostream>
using namespace std;
int main() {
	bool list[100] = { 0 };
	for (int stu = 1; stu <= 100; stu++)
	{
		for (int lock = stu - 1; lock < 100; lock += stu)
		{
			list[lock] = !list[lock];
		}
	}
	cout << "开着的序号为";
	for (int i = 0; i < 100; i++)
	{
		if (list[i])
		{
			cout << i+1 << " ";
		}
	}
}