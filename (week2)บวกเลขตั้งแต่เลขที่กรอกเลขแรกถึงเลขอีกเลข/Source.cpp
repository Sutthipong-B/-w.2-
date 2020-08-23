#include<stdio.h>
int main()
{
	int a, b;
	int sum = 0;
	scanf_s("%d%d", &a, &b);
	int i;
	if (a <= b)
	{
		for (i = a; i <= b; i++)
		{
			sum += i;
		}
	}
	else if (a > b)
	{
		for (i = b; i <= a; i++)
		{
			sum += i;
		}
	}
	printf("%d", sum);
	return 0;
}