#include<stdio.h>
#include <math.h>
#define ll long long
ll lon(ll n)
{
	int k = 0;
	int a[1000] = {0};
	while(n != 0)
	{
		int du = n%10;
		a[k++] = du;
		n /= 10;
	}
	for(int i = 0; i < k; i++)
	{
		if(a[i] == 5)
		{
			a[i] = 6;
		}
	}
	ll tmp = 0;
	for(int i = k - 1; i >= 0; i--)
	{
		tmp = tmp*10 + a[i];
	}
	return tmp;
	
}
ll chuyen(ll n)
{
	int k = 0;
	int a[1000] = {0};
	while(n != 0)
	{
		int du = n%10;
		a[k++] = du;
		n /= 10;
	}
	for(int i = 0; i < k; i++)
	{
		if(a[i] == 6)
		{
			a[i] = 5;
		}
	}
	ll tmp = 0;
	for(int i = k - 1; i >= 0; i--)
	{
		tmp = tmp*10 + a[i];
	}
	return tmp;
	
}
int main ()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n, m;
		scanf("%lld %lld", &n, &m);
		ll t1 = chuyen(n);
		ll t2 = chuyen(m);
		ll m1 = lon(n);
		ll m2 = lon(m);
		printf("%lld %lld\n", t1 + t2, m1 + m2);
		
	}
	return 0;
}

