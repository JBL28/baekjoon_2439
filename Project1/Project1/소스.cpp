#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num;
	scanf("%d", &num);
	for (int i = num-1; i >= 0; i--) {
		for (int j = 1; j <= i; j++)
			printf(" ");
		for (int j = 1; j <= num - i; j++)
			printf("*");
		printf("\n");
	}
	return 0;
}