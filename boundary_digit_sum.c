#include<stdio.h>
int main()
{
	int x,a,n = 0,sum = 0;
	printf("Please enter value of x: ");
	scanf_s("%d", &x);
	a = x % 10;
	x = x / 10;
	while (x) {
		n = x;
		x = x / 10;
	}
	sum = a + n;
	printf("Sum of boundary digits: %d", sum);
	return 0;
}