#include <stdio.h>
#include <math.h>
#define ll long long
ll giaiThua(ll n)
{
	ll gt = 1;
	for(ll i = 1; i <= n; i++)
	{
		gt *= i;
	}
	return gt;
}
int check(ll n)
{
	ll sum = 0;
	ll tmp = n;
	while(n != 0)
	{
		int du = n%10;
		sum += giaiThua(du);
		n /= 10;
	}
	if(sum == tmp)
		return 1;
	return 0;
}
void process()
{
	ll a, b;
	scanf("%lld %lld", &a, &b);
	ll c = fmin(a, b);
	ll d = fmax(a, b);
	for(ll i = c; i <= d; i++)
	{
		if(check(i))
		{
			printf("%d ", i);
		}
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
