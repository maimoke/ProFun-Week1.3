#include<stdio.h>
int main()
{
	int n, i, sum1 = 0,sum2=0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		sum1 = sum1 + i * i;
	for (i = 1; i <= n; i++)
		sum2 = sum2 + i;
	sum2 = sum2 * sum2;
	if (sum1 > sum2)printf("%d", sum1 - sum2);
	else printf("%d", sum2 - sum1);
}