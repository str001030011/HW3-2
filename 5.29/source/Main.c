#include<stdio.h>
#include<stdlib.h>

int Power(int a, int b);

int main(void)
{
	int a, b;
	printf("The base number is:");
	scanf_s("%d", &a);
	printf("The index number is:");
	scanf_s("%d", &b);
	printf("power(%d,%d)=%d", a, b, Power(a, b));

	system("pause");
	return 0;
}

int Power(int a, int b)
{
	int c;
	c = b;
	if (b > 0)
	{
		for (int i = 0; i < b; i++)
		{
			a = a * c;
		}
		return a;
	}
	else
	{
		return 1;
	}

}
