# include <stdio.h>
# include <limits.h>
# include <stdlib.h>
 void print_bstr(unsigned int num);
unsigned int rotate_l(unsigned int num , int loop); 
int main()
{
	int num ; 
	int loop ;
	puts("��������Ҫѭ�����Ƶ�ֵ(q �˳�)");
	while (scanf(" %d" , &num))
	{
		while (getchar() != '\n');
		puts("��������Ҫѭ�����ƵĴ���(q ������һ���˵�)");
		while (scanf(" %d" , &loop))
		{
			while (getchar() != '\n') ;
			puts("�������ֵ�Ķ�����Ϊ");
			print_bstr(num);
			putchar('\n');
			puts("ѭ�����ƺ�Ķ�����Ϊ");
			print_bstr(rotate_l(num , loop));
			putchar('\n');
			puts("��������Ҫѭ�����ƵĴ���(q ������һ���˵�)");
		}
		while (getchar() != '\n') 
		puts("��������Ҫѭ�����Ƶ�ֵ(q �˳�)");
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
