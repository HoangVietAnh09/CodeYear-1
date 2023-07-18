#include <stdio.h>
#include <math.h>
#define ll long long
#define N 1000000	
void process()
{
	int n;
	scanf("%d", &n);
	int a[1004];
	int b[1004] = {0};
	int c[1004] = {0};
	int dem1 = 0, dem2 = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2 == 0)
		{
			b[dem1++] = a[i];
		}
		else
		{
			c[dem2++] = a[i];
		}
	}
	for(int i = 0; i < dem1; i++)
	{
		printf("%d ", b[i]);
	}
	printf("\n");
	for(int i = 0; i < dem2; i++)
	{
		printf("%d ", c[i]);
	}
}
int main()
{

	process();
	return 0;
}
