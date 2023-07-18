#include <stdio.h>
#include <string.h>
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	int b[m][n];
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++)
		{
			b[i][j] = a[j][i];
		}
	}
//	for(int i = 0; i < m; i++)
//	{
//		for(int j = 0; j < n; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
	int c[n][n];
	int k = 0, p = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			for(int h = 0; h < m; h++)
			{
				a[k][p] += a[j][h]*b[h][j];
			}
			p++;
		}
		k++;
		p = 0;
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}
