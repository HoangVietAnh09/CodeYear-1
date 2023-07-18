#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
int chinhPhuong(ll n)
{
	int i = sqrt(n);
	if(i*i == n)
		return 1;
	return 0;
}
void process()
{
	ll m, n;
	scanf("%lld %lld", &m, &n);
	int dem = 0;
	if(chinhPhuong(m))
	{
		int tmp1 = sqrt(n);
		int tmp2 = sqrt(m);
		dem = tmp1 - tmp2 + 1;
		printf("%d\n", dem);
		for(int i = sqrt(m); i <= sqrt(n); i++)
		{
			printf("%d\n", i*i);
		}
	}
	else
	{
		int tmp1 = sqrt(n);
		int tmp2 = sqrt(m);
		dem = tmp1 - tmp2;
		printf("%d\n", dem);
		for(int i = sqrt(m) + 1; i <= sqrt(n); i++)
		{
			printf("%d\n", i*i);
		}
		
	}
}
int main()
{
	process();
	return 0;
}
