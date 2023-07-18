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
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		ll max = -10e10;
		if(check(n))
		{
			printf("%lld\n", n);
		}
		else
		{
			for(int i = 2; i <= sqrt(n); i++)
			{
				while(n > 10)
				{
					n /= i;
				}
			}
			printf("%lld\n", n);
		}
		
		
	}
	return 0;
}

