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
	cout << "������Ԫ�ظ�����" << endl;
	cin >> len;
	int* p = new int[len];
	cout << "����������Ԫ�أ�" << endl;
	for (int i = 0; i < len; i++)
	{
		cin >> *(p+i);
	}
	int index;
	cout << "����������۲��Ԫ�أ�" << endl;
	cin >> index;
	cout << "��Ԫ��Ϊ��" << *(p + index - 1) << endl;
	bubblesort(p, len);
	for (int i = 0; i < len; i++)
	{
		cout << *(p + 1) << " ";
	}
	delete p;
}