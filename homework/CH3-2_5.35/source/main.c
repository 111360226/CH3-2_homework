#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
unsigned long  n;
unsigned long long fib;

unsigned long fibonacci(unsigned long n)
{
	if (n == 0)
		return 0;

	if (n == 1)
		return 1;

	return (fibonacci(n - 1) + fibonacci(n - 2));
}

int main()
{
	printf("請輸入費氏數列第n項: ");
	scanf("%ld", &n);
	fib=fibonacci(n);
	printf("第n項為 %lld\n", fib);
	return 0;
}