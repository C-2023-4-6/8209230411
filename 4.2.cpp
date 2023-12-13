#include<iostream>
using namespace std;
void bubblesort(double list[], int listsize)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listsize - 1; j++)
			if (list[j] > list[j + 1])
			{
				swap(list[j], list[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main()
{
		double list[10];
		int listsize = sizeof(list) / sizeof(list[0]);
		cout << "请输入十个双精度数字：" << endl;
		for (int i = 0; i < 10; i++)
		{
			cin >> list[i];
		}
		bubblesort(list, listsize);
		for (int i = 0; i < 10; i++)
		{
			cout << list[i] << "  ";
		}
}