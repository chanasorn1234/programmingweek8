#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
void End();
int main()
{
	char x[100], y[100], s[] = {'s','a','m','e',' '};
	int m, n;
	printf("Enter text1: ");
	scanf("%s", &x);
	printf("Enter text2:");
	scanf("%s", &y);
	
	m = strlen(x);
	n = strlen(y);
	
	if (m > n)
	{
		printf("%s", x);
		printf("\n");
	}
	if (m < n)
	{
		printf("%s", y);
		printf("\n");

	}
	if (m == n)
	{
		for (int i = 0; i <= 4; i++)
		{
			printf("%c", s[i]);
			printf(" ");

		}
		printf("\n");

	}
	End();

	return 0;
}
void End()
{
	char End[] = { '¨','º', 'â', '»', 'Ã', 'á', '¡', 'Ã', 'Á', };

	for (int j = 0; j <= 8; j++)
	{
		printf("%c", End[j]);
		printf(" ");
	}
}