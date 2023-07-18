#include<stdio.h>
#include <math.h>
#define ll long long
int deQuy(int n, int k)
{
	if(k == 0 || k == n - 1)
		return 1;
	return deQuy(n - 1, k - 1) + deQuy(n - 1, k);
}
int main ()
{
	int n;
	scanf ("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int b[n][n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			if(i == j)
			{
				b[i][j] = a[i][n - j - 1];
			}
			else if(i == n - j - 1)
			{
				b[i][j] = a[i][j];
			}
			else
			{
				b[i][j] = a[i][j];
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", b[i][j]);
		}
		printf("%d\n");
	}
	return 0;
}

