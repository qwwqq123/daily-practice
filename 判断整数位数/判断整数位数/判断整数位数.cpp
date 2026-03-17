#include<stdio.h>

int main()
{
	long long a;
	scanf_s("%lld", &a);
	int i = 1;
	for (i;i; i++)
	{
		if (a < 10)
		{
			break;
		}
		a /= 10;
	}
	printf("%d",i);
	return 0;
}