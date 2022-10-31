#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int a,b,c;
int answer = 1;
int power(int a, int b)
{
	for (int i = 0; i < b; i++)
	{
		answer *= a;
	}
	return answer;
}

main()
{
	printf("Please input the base:");
	scanf("%d", &a);
	printf("Please input the exponent:");
	scanf("%d", &b);
	c=power(a, b);
	printf("Answer is %d\n", c);

	return 0;
}