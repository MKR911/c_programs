#include<stdio.h>
int main() {
	int n, i = 1;
	printf("Please enter value of n:  ");
	scanf_s("%d", &n);
	for (; i <= n; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
		    printf(" fizzbuzz ");
		}
		else if (i % 3 == 0)
		{
			printf(" fizz ");
		}
		else if (i % 5 == 0)
		{
			printf(" buzz ");
		}
		else
		{
			printf(" %d ", i);
		}
	}
}