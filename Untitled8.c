#include <stdio.h>
#include <math.h>
#define ll long long
#define N 1000009
int check(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			return 0;
		}
	}
	return n > 1;
}
void process()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(check(a[i]))
		{
			printf("%d ", a[i]);
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
