#include <stdio.h>
#include <math.h>
#define ll long long
#define N 1000000	
void process()
{
	int n;
	scanf("%d", &n);
	int a[1004] = {0}; 
	int b[1004] = {0};
	int c[1004] = {0};
	int dem = 0;
	int j = 0;
	for(int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		a[x]++;
		if(a[x] == 1)
		{
			b[j++] = x;
		}
	}
	for(int i = 0; i < j; i++)
	{
		if(a[b[i]] == 1)
		{
			c[dem++] = b[i];
		}
	}
	printf("%d\n", dem);
	for(int i = 0; i < dem; i++)
	{
		printf("%d ", c[i]);
	}
}
int main()
{

	process();
	return 0;
}
