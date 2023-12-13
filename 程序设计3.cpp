#include<iostream>
using namespace std;
void bubblesort(int p[], int len)
{
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < len - 1; j++)
			if (p[j] > p[j + 1])
			{
				swap(p[j], p[j + 1]);
				changed = true;
			}
	} while (changed);
}
int main() {
	int len;
	cout << "请输入元素个数：" << endl;
	cin >> len;
	int* p = new int[len];
	cout << "请输入数组元素：" << endl;
	for (int i = 0; i < len; i++)
	{
		cin >> *(p+i);
	}
	int index;
	cout << "请输入你想观察的元素：" << endl;
	cin >> index;
	cout << "该元素为：" << *(p + index - 1) << endl;
	bubblesort(p, len);
	for (int i = 0; i < len; i++)
	{
		cout << *(p + 1) << " ";
	}
	delete p;
}