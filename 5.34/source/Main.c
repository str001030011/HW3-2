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
	c = a;
	if (b > 1)
	{
		for (int i = 1; i < b; i++)
		{
			a = a * c;
		}
		return a;
	}
	else if(b==0)
	{
		return 1;
	}
	else if (b == 1)
	{
		return a;
	}
}