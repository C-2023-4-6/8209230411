#include<iostream>
using namespace std;
int main() {
	int num[10];
	int distinct_num[10];
	int sum = 0;
	
	cout << "Enter ten numbers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> num[i];
	}
	for (int i = 0; i < 10; i++)
	{
		bool distinct = 1;
		for (int j = i + 1; j < 10; j++)
		{
			if (num[i] == num[j])
			{
			    distinct = 0;
				break;
			}
		}
			if (distinct)
			{
				distinct_num[sum] = num[i];
				sum++;
			}
	}
	cout << "The distinct numbers are£º" << endl;
	for (int i = 0; i < sum; i++)
	{
		cout<< distinct_num[i]<<" ";
	}
}