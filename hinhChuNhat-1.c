#include <stdio.h>
#include <math.h>
#define ll long long
int uocChung(int n, int m)
{
	int tmp;
	int c = fmax(m, n);
	int d = fmin(m, n);
	for(int i = d; i >= 1; i--)
	{
		if(c%i == 0 && d%i == 0)
		{
			tmp = i;
			break;
		}
	}
	return tmp;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int c = fmin(a, b);
	int d = fmax(a, b);
	for(int i = c; i <= d; i++)
	{
		for(int j = c + 1; j <= d; j++)
		{
			if(uocChung(i, j) == 1 && i < j)
			{
				printf("(%d,%d)\n", i, j);
			}
		}
	}
	
	return 0;
}
