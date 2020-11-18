#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, s, L;
	int a[100];
	printf("¿é¤Jªø«×:");
	scanf_s("%d", &L);
	while (L < 0)
	{
		printf("Error");
		return 0;
	}
	int x = 1, y = 2;
	a[0] = x;
	a[1] = x;
	a[2] = y;
	for (n = 3; n < L; n++)
	{
		a[n] = a[n - 1] + a[n - 2];
	}
	for (n = 0; n < L; n++)
	{
		printf("%d ", a[n]);
	}
	system("pause");
	return 0;
}