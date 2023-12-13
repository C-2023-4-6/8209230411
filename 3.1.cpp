#include <iostream>
using namespace std;
int yue(int a, int b)
{
    int m =(a<b?a:b);
    for (;; m--)
    {
        if (a % m == 0 && b % m == 0)
        {
            break;
        }
    
    }
    return m;
}

int bei(int a, int b)
{
    int m = (a > b ? a : b);
    for (;; m++)
    {
        if (m % a == 0 && m % b == 0)
        {
            break;
        }
    }
    return m;
}

int main()
{
    int m, n;
    cout << "请输入两个数" << endl;
    cin >> m >> n;
    int a = yue(m, n);
    int b = bei(m, n);
    cout << "这两个数的最大公因数为：" << a << endl;
    cout << "这两个数的最小公倍数为：" << b << endl;
    return 0;
}