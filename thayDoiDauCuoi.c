#include <stdio.h>
#include <math.h>
#define ll long long

void process()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		int x;
		scanf("%d", &x);
		sum += x;
	}
	printf("%.3lf", 1.0*sum/n);
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
