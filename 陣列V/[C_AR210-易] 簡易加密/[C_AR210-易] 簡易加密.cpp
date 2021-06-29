#include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n; //偏移量
	int i;
	char a;
	for(i=0;i<n;i++)
	{
		cin >> a;
		cout << (char)(a+2)<< endl;

	}
}
