#include<stdio.h>
#include<string.h>
int main()
{
	char firstn[20];
	char familyn[20];
	printf("input your family name:");
	scanf("%s",familyn);
	printf("\ninput your first name:");
	scanf("%s",firstn);
	printf("%s %s\n",firstn,familyn);
	printf("%*d %*d\n",strlen(firstn),strlen(firstn),strlen(familyn),strlen(familyn));
	printf("%s %s\n",firstn,familyn);
	printf("%d %*d",strlen(firstn),strlen(firstn),strlen(familyn));
	return 0;
 } 
