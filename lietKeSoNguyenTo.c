#include <stdio.h>
#include <math.h>
#define ll long long
int check(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
			return 0;
	}
	return n > 1;
}
void process()
{
	int n;
	scanf("%d", &n);
	int a[1000] = {0};
	int f = 0;
	for(int i = 0; i < n; i++)
	{
		int x;
		scanf("%d",& x);
		if(check(x))
		{
			a[f++] = x;
		}
	}
	printf("%d ", f);
	for(int i = 0; i < f; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
//	int t;
//	scanf("%d", &t);
//	while(t--)
//	{
		process();
//		printf("\n");
//	}
	return 0;
}
