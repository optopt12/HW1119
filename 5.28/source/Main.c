#include <stdio.h>
#include <stdlib.h>
int main()
{
		char a;
		printf("�п�J�n�ഫ���r��:");
		scanf_s("%c", &a);
		if ((a >= 'A') && (a <= 'Z'))
		{
			a += 32;
			printf("�ഫ���r��:%c",a);
		}
		else if ((a >= 'a') && (a <= 'z')) {
			a -= 32;
			printf("�ഫ���r��:%c", a);
		}
		
		system("pause");
		return 0;
}