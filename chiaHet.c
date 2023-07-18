#include <stdio.h>
#include <math.h>
#define ll long long
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n][m];
	for(int i = 1; i <= n; i++)
	{
		int j = i;
		for(j = i; j <= m; j++)
		{
			printf("%d", j);
		}
		j--;
		int tmp = i - 1;
		while(tmp--)
		{
			j--;
			printf("%d", j);
		}
		printf("\n");
	}
	
	return 0;
}
