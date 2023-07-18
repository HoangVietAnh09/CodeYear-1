#include<stdio.h>
#include <math.h>
int main ()
{
	int c, d;
	scanf("%d %d", &c, &d);
	int max = fmax(c, d);
	for(int i = 1; i <= c; i++)
	{
		for(int j = 1; j <= d; j++)
		{
			printf("%d",abs(max - i - j + 1) + 1);
		}
		printf("\n");
	}
	return 0;
}

