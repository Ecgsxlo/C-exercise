#include<stdio.h>
int p1();
int p2();
int p3();
int main()
{
	printf("strating now:\n"); 
	p1();
	printf("done!"); 
	return 0;
 } 
int p1()
{
	printf("one\n");
	p2();
	return 0;
}
int p2()
{
	printf("two\n");
	p3();
	return 0;
}
int p3()
{
	printf("three\n");
	return 0;
}
