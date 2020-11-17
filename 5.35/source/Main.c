#include<stdlib.h>
#include<stdio.h>

void answer(int x);

int main(void)
{
	int x;
	printf("enter a number");
	scanf_s("%d", &x);
	answer(x);
	system("pause");
	return 0;
}
void answer(int x)
{
	int a1 = 0,a2 = 1;
	unsigned long long int v, y, z;
	for (int i = 1; i < x +1; i++)
	{
		if (i == 1)
		{
			printf("%3d\n", a1);
		}
		else if (i == 2)
		{
			printf("%3d\n", a2);
		}
		else
		{
			v = a1 + a2;
			a1 = a2;
			a2 = v;
			printf("%I64u\n", v);
		}
	}
}