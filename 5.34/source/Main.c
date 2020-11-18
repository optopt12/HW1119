#include <stdio.h>
#include <stdlib.h>
int exponentiation(int);
int main(void)
{
	int i, n;
	printf("base:");
	scanf_s("%d", &i);
	printf("exponent:");
	scanf_s("%d", &n);
	exponentiation(n,i);
	printf("µ²ªG¬°%d", exponentiation(n,i));
	system("pause");
	return 0;
}
int exponentiation(int n, int i)
{
	if (n == 0)
	{
		return 1;
	}
	i = i * exponentiation(n - 1, i);
}