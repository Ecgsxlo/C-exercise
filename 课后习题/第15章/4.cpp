# include <stdio.h>
# include <stdlib.h>
# define BIT 8
int bit_value(int value , int n);
int main()
{
	int num ;
	printf("��������Ҫ�鿴��λ״������(q �˳�);");
	while (scanf(" %d" , &num))
	{
		while (getchar() != '\n');
		for (int i = 0 ; i < BIT ; i++ )
			printf("%d ��%dλ��״��: %s\n" ,num , i + 1 , bit_value(num , i + 1) ? "��" : "�ر�" );
		printf("��������Ҫ�鿴��λ״������(q �˳�);");
	}
	return 0 ;
}
int bit_value(int value , int n)
{
	if (!n)
	{
		fputs("λ��ֵ����Ϊ0.--bit_value" , stderr);
		exit(1);
	}
	return (value & (1 << (n - 1)));
}
