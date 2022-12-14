# include <stdio.h>
# include <stdlib.h>
# define BIT 8
int bit_value(int value , int n);
int main()
{
	int num ;
	printf("请输入您要查看打开位状况的数(q 退出);");
	while (scanf(" %d" , &num))
	{
		while (getchar() != '\n');
		for (int i = 0 ; i < BIT ; i++ )
			printf("%d 第%d位打开状况: %s\n" ,num , i + 1 , bit_value(num , i + 1) ? "打开" : "关闭" );
		printf("请输入您要查看打开位状况的数(q 退出);");
	}
	return 0 ;
}
int bit_value(int value , int n)
{
	if (!n)
	{
		fputs("位置值不能为0.--bit_value" , stderr);
		exit(1);
	}
	return (value & (1 << (n - 1)));
}
