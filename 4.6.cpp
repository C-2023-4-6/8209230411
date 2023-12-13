#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		char letter = s[i];
		if (letter >= 'A' && letter <= 'Z')
		{
			letter += 32;
		}
		if (letter >= 'a' && letter <= 'z')
		{
			int a = letter - 97;
			counts[a]++;
		}
	}
}
int main() {
	int counts[26] = { 0 };
	char s[1000];
	cout << "Enter a string:" << endl;
	cin.getline(s, 1000);
	count(s, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i])
		{
			char letter = 'a' + i;
			cout << letter << ":" << counts[i] << "times"<<endl;
		}
	}
}