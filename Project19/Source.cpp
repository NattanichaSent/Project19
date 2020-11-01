#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int lekkee(int number)
{
	return number % 2;
}
int main()
{
	int a=0;
	int b[1000];
	int sum = 0;
	printf("All file = ");
	scanf("%d", &a);
	printf("File name = ");
	for (int i = 0; i < a; i++)
	{
		scanf("%d", &b[i]);
		if (b[i] >= 0 && lekkee(b[i]) == 1)
		{
			sum++;
		}
	}
	printf("Your file = %d", sum);
	return 0;
}