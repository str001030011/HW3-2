#include<stdio.h>
#include<stdlib.h>

int changecode(char a);

int main(void)
{
	char a;
	printf("輸入一英文字母:");
	scanf_s("%c", &a);
	printf("%d", a);
	printf("%c",changecode(a));
	printf("%d", changecode(a));
	system("pause");
	return 0;
}
int  changecode(char a)
{
	if (a > 64 && a < 91)
	{
		char b;
		b = a + 32;
		return b;
	}
	if (a > 96 && a <= 123)
	{
		char b;
		b = a - 32;
		return b;
	}
}