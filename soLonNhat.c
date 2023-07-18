#include <stdio.h>
#include <math.h>
#define ll long long
void process()
{
	int n, m, p;
	scanf("%d %d", &n, &m);
	int a[1004], b[1004], c[1004];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	scanf("%d", &p);
	int f = 0;
	while(f <= m + n)
	{
		if(f < c)
		{
			c[f++] = a[i];
		}
		else
		{
			c[f++] = b[i];
		}
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		process();
		printf("\n");
	}
	return 0;
}
