#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, i;
	printf("輸入兩數:");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a < b)//a大，b小
	{
		c = a;
		a = b;
		b = c;
	}
	for (i = a; i > 0; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("%d和%d的最小公倍數為%d", a, b, i);
			break;
		}
	}
	system("pause");
	return 0;
}