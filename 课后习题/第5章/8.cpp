#include<stdio.h>
int main()
{
	int mod;
	int num=0;
	scanf("%d",&mod);
	do
	{
		scanf("%d",&num);
		if(num) printf("%d\n",num%mod);
	}while(num);
	return 0;
 } 
