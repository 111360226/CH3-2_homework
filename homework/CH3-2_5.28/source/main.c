#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


alphabet(char n)
{
	n ^= 0x20;
	printf("轉換後小寫字母為: %c\n\n", n);
	return n;
}



main()
{
	char v1;
	printf("請輸入英文大寫字母:");
	scanf("%c", &v1);
	alphabet(v1);
	system("pause");
}