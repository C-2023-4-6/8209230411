#include<iostream>
using namespace std;
void merge(int list1[], int size1, int list2[], int size2, int list3[])
{
	//���е�һ������
	bool changed = true;
	do
	{
		changed = false;
		for (int i = 0; i < size1 - 1; i++)
			if (list1[i] > list1[i + 1])
			{
				swap(list1[i], list1[i + 1]);
				changed = true;
			}
	} while (changed);
	//���еڶ�������
	do
	{
		changed = false;
		for (int i = 0; i < size2 - 1; i++)
			if (list2[i] > list2[i + 1])
			{
				swap(list2[i], list2[i + 1]);
				changed = true;
			}
	} while (changed);
	//�ϲ��������кõ�����
	int num3=0;
	for (int num1 = 0; num1 < size1; num1++)
	{
		list3[num3] = list1[num1];
		num3++;
	}
	for (int num2 = 0; num2 < size2; num2++)
	{
		list3[num3] = list2[num2];
		num3++;
	}
}
int main(){
	int size1, size2;
	//�����һ������
	cout << "�������һ�������Ԫ�ظ�����"<<endl;
	cin >> size1;
	int* list1 = new int[size1];
	cout << "�������һ�������Ԫ�أ�"<<endl;
	for (int i = 0; i < size1; i++)
	{
		cin >> list1[i];
	}
	//����ڶ�������
	cout << "������ڶ��������Ԫ�ظ�����"<<endl;
	cin >> size2;
	int* list2 = new int[size2];
	cout << "������ڶ��������Ԫ�أ�"<<endl;
	for (int i = 0; i < size2; i++)
	{
		cin >> list2[i];
	}
	//���ú���
	int size3 = size1 + size2;
	int* list3 = new int[size3];
	merge(list1, size1, list2, size2, list3);
	cout << "The merged list is:"<<endl;
	for (int i = 0; i < size3; i++)
	{
		cout << list3[i] << " ";
	}
}