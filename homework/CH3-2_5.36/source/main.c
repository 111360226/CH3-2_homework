#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char A, char B, char C)
{
	if (n == 1)
	{
		printf("move sheet from %c to %c\n", A, C);
	}
	else
	{
		hanoi(n - 1, A, C, B);
		hanoi(1, A, B, C);
		hanoi(n - 1, B, A, C);
	}
}

int main()
{
	int n;
	printf("please input number of ring: ");
	scanf("%d", &n);
	hanoi(n, 'A', 'B', 'C');
}
