#include <stdio.h>
#include <math.h>
#define ll long long

void process()
{
	ll n;
	scanf("%lld", &n);
	int dem = 0;
	while(n != 0)
	{
		int du = n%10;
		if(du%2 != 0)
		{
			dem++;
		}
		else
		{
			dem--;
		}
		n /= 10;
	}
	if(dem > 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		process();
	}
	return 0;
}
