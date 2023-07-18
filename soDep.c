#include <stdio.h>
#include <math.h>
#define ll long long
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		ll n;
		scanf("%lld", &n);
		ll tp = n;
		int a[100] = {0};
		int k = 0;
		while(n != 0)
		{
			int du = n%10;
			a[k++] = du;
			n /= 10;
		}
		ll m = 0;
		for(int i = 1; i < k - 1; i++)
		{
			m = m*10 + a[i];
		}
		ll mu = a[k-1]*pow(10, k - 1);
		ll tmp = tp - mu - a[0];
		tmp /= 10;
		if(m == tmp && (a[0] == 2*a[k-1] || 2*a[0] == a[k-1]))
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}
