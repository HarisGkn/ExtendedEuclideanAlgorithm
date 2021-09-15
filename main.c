#include <stdio.h>
int a ;
int b ;
int main()

{
	printf("enter 2 numbers\n");
	scanf("%d",&a);
	scanf("%d",&b);
	int x, y;

	printf("d = %d\n", extended_gcd(a, b, &x, &y));
	printf("x = %d, y = %d", x, y);

	return 0;
}
int extended_gcd(int a, int b, int *x, int *y)
{
	if (a == 0)
	{
		*x = 0;
		*y = 1;
		return b;
	}

	int x1, y1;
	int gcd = extended_gcd(b % a, a, &x1, &y1);

	*x = y1 - (b/a) * x1;
	*y = x1;

	return gcd;
}
