# include <stdio.h>
int count_openbit(unsigned int n);
int main()
{
	int num ;
	puts("��������Ҫ�鿴��λ����������:(q �˳�)");
	while (scanf(" %d" , &num))
	{
		while (getchar() != '\n') ;
		printf("%d �д�λһ����%d��\n" , num , count_openbit(num));
		puts("��������Ҫ�鿴��λ����������:(q �˳�)");
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
