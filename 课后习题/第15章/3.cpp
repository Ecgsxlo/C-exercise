# include <stdio.h>
int count_openbit(unsigned int n);
int main()
{
	int num ;
	puts("请输入您要查看打开位总数的整数:(q 退出)");
	while (scanf(" %d" , &num))
	{
		while (getchar() != '\n') ;
		printf("%d 中打开位一共有%d个\n" , num , count_openbit(num));
		puts("请输入您要查看打开位总数的整数:(q 退出)");
	}
	return 0 ;
}
int count_openbit(unsigned int n)
{
	int count = 0 ;
	while (n)
	{
		count += (n & 1) ;
		n >>= 1 ;
	}
	return count ;
}
