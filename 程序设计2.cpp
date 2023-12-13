#include<iostream>
using namespace std;
int parseHex(const char* const hexString){
	string hex = hexString;
	int ten = 10;
	for (int i = 0; i < hex.length(); i++)
	{
		char a = hex[i];
		int num = 0;
		if (a >= '0' && a <= '9')
		{
			num = a - '0';
		}
		else if (a >= 'A' && a <= 'F')
		{
			num = a - 'A' + 10;
		}
		int rank = hex.length() - i - 1;
		int multi = 1;
		for (int j = 0; j < rank; j++)
			multi *= 16;
		ten += num * multi;
		return ten;
	}
}
int main(){
	int num = parseHex("A5");
	cout << "转化为十进制为：" << num << endl;
	return 0;
}