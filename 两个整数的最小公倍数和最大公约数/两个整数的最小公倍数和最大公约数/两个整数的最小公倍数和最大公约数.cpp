#include <stdio.h>

int gys(long long a,long long b)
{ 
	if(b==0)
		return a;
	return gys(b, a % b);
}

int gbs(long long a, long long b)
{
	int t = gys(a, b);
	return a * b / t;
}

int main()
{
	long long a, b;
	scanf_s("%lld %lld", &a, &b);
	printf("%lld %lld", gbs(a, b), gys(a, b));
	return 0;
}