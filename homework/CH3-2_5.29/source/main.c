#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int a, b, max, step, lcm;

int LCM(int a,int b)
{
	if (a > b)
		max = step = a;
	else
		max = step = b;

	while (1) {
		if (max%a == 0 && max%b == 0) {
			lcm = max;
			break;
		}

		max += step;
	}
	return lcm;
	//printf("LCM is %d\n", lcm);
}





int main()
{

	printf("Please input two integer:");
	scanf("%d %d", &a, &b);
	LCM(a, b);
	printf("LCM is %d\n", lcm);
	return 0;
}


































/*#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int GCD(int a, int b)
{           
	int temp = 0;
	while (b != 0)
	{
		temp = a;
		a = b;
		b = temp % b;
	}
	return a;
}

 
int main()
{
	int a, b;
	int gcd;
	int lcm;

	scanf("%d %d", &a, &b)
	gcd = GCD(a, b);
	lcm = a * b / gcd;
	printf("lcm\n");

	return 0;
}*/