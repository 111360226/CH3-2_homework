#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


alphabet(char n)
{
	n ^= 0x20;
	printf("�ഫ��p�g�r����: %c\n\n", n);
	return n;
}



main()
{
	char v1;
	printf("�п�J�^��j�g�r��:");
	scanf("%c", &v1);
	alphabet(v1);
	system("pause");
}