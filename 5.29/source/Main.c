#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b, c, i;
	printf("��J���:");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a < b)//a�j�Ab�p
	{
		c = a;
		a = b;
		b = c;
	}
	for (i = a; i > 0; i++)
	{
		if (i % a == 0 && i % b == 0)
		{
			printf("%d�M%d���̤p�����Ƭ�%d", a, b, i);
			break;
		}
	}
	system("pause");
	return 0;
}