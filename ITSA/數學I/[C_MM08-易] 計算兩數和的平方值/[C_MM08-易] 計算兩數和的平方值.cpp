#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF)
	{
		int c=a+b; // 和
		cout<<c*c<<endl; // 平方值
	}
}
