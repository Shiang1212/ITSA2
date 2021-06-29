#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	while((scanf("%d",&n))!=EOF)
	{
		int i,cnt=0;
		for(i=1;i<=n;i++)
		{
			if(i%3==0)	//可以整除
			{
				cnt=cnt+i; //疊加
			}
		 }
		 cout<<cnt<<endl;
	}
}
