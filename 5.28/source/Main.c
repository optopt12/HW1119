#include <stdio.h>
#include <stdlib.h>
int main()
{
		char a;
		printf("請輸入要轉換的字元:");
		scanf_s("%c", &a);
		if ((a >= 'A') && (a <= 'Z'))
		{
			a += 32;
			printf("轉換的字元:%c",a);
		}
		else if ((a >= 'a') && (a <= 'z')) {
			a -= 32;
			printf("轉換的字元:%c", a);
		}
		
		system("pause");
		return 0;
}