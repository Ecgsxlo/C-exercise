# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
 void print_bstr(unsigned int num);
unsigned int rotate_l(unsigned int num , int loop); 
int main()
{
	int num ; 
	int loop ;
	puts("请输入您要循环左移的值(q 退出)");
	while (scanf(" %d" , &num))
	{
		while (getchar() != '\n');
		puts("请输入您要循环左移的次数(q 返回上一级菜单)");
		while (scanf(" %d" , &loop))
		{
			while (getchar() != '\n') ;
			puts("您输入的值的二进制为");
			print_bstr(num);
			putchar('\n');
			puts("循环左移后的二进制为");
			print_bstr(rotate_l(num , loop));
			putchar('\n');
			puts("请输入您要循环左移的次数(q 返回上一级菜单)");
		}
		while (getchar() != '\n') 
		puts("请输入您要循环左移的值(q 退出)");
	}
	return 0 ;
}
unsigned int rotate_l(unsigned int num , int loop)
{
	for (int i = 0 ; i < loop ; i++)
		num = (num >> (CHAR_BIT * sizeof(unsigned int) - 1)) | (num << 1) ; 
	return num ;
}
void print_bstr(unsigned int num)
{
	static int n = 0 ;
	if (!num && !n)
		return ;
	if (num)
	{
		n++ ;
		print_bstr(num >> 1);
	}
	else
		return ;
	putchar('0' + (num & 1));
	if ((--n % 4) == 0)
		putchar(' ');
}
