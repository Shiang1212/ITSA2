#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int cnt;
    cin >> cnt;
    for(int i = 0; i < cnt; i++)
    {
        int a = 0, b = 0, c = 0, d = 0, e = 0;

        cin >> a >> b >> c >> d;

        if((d - b) == (c - a)) // 等差
        {
            e = 2 * d - c;
        }
        else if((d / b) == (c / a)) // 等比
        {
            e = d * d / c;
        }
        cout << a << " " << b << " " << c << " " << d << " "<< e << endl;
    }
}
