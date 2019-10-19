#include<stdio.h>
int main()
{
	int a;
	int ID;
	int t, n;
	printf("请输入");
	scanf("%d", &ID);
	if (ID = 1)
	{
		printf("1.\n2.\n3.\n4.\n5.\n6.\n");
		scanf("%d", a);
		if (a == 1)
		{
			printf("请在此处输入");
			scanf("%d", &t);
			n = t;
		}
		switch (t)
		{
		case 6:printf("A"); break;
		case 7:printf("B"); break;
		case 8:printf("C"); break;
		default:printf("D"); break;
		}
		return 0;
	}
	else printf("dbq");
}
