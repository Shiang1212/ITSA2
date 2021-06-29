#include<iostream>
using namespace std;

int main()
{
	int n, sum, max;
	while (cin >> n)
	{
		sum = 0;
		max = 0;
		for (int i = 1; i <= n; i++)
		{
			if (sum + i > n)
    		break;
			sum += i; // 1+2+3+4+5+6+7+...
			max++;
		}
	cout << max << endl;
 	}
}
