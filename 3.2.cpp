#include<iostream>
using namespace std;
bool is_prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i*i<num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num = 2;
    if (is_prime(num))
    {
        for(int sum=0;sum<20;sum++)
        {
            for(int j=0;j<10;j++)
            {
                cout << num << "  ";
                num++;
            }
            cout << endl;
        }
    }
    return 0;
}
