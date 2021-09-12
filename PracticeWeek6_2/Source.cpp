#include<stdio.h>
int main()
{
	int x;
	scanf_s("%d", &x);
	int start = 1;
	int end = 2 * x - 1;
	for (int i = 1; i <= 2 * x - 1; i++)
	{
		for (int j = 1; j <= 2 * x - 1; j++)
		{
			if (j >= start && j <= end)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		if (i < x)
		{
			start++;
			end--;
		}
		else
		{
			start--;
			end++;
		}
		printf("\n");
	}
	return 0;
}