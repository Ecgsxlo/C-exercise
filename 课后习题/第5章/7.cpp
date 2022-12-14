#include<stdio.h>
double threeq(double num);
int main()
{
	double num;
	scanf("%lf",&num);
	double ans=threeq(num);
	printf("%g",ans);
	return 0;
 } 
double threeq(double num)
{
	return num*num*num;
}
