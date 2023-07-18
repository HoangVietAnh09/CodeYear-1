#include <stdio.h>
#include <math.h>
#define ll long long
int nguyenTo(ll n)
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
	ll n;
	scanf("%lld", &n);
	for(int i = 2; i <= n; i++)
	{
		while(nguyenTo(i) && n%i == 0)
		{
			int dem = 0;
			 n /= i;
		}
		printf("%d(%d) ", i, dem);
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
