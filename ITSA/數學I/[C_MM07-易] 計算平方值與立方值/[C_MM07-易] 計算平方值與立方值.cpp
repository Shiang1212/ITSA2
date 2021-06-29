#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a;
	while(scanf("%d",&a)!=EOF)
	{
		cout<<a<<" "<<a*a<<" "<<a*a*a<<endl; //平方:a*a , 立方:a*a*a
	}
}
