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
		ll a[1000] = {0};
		int k = 0;
		ll m = 0;
		int tmp = 0;
		while(n != 0)
		{
			a[k++] = n%10;
			n /= 10;
		}
		for(int i = k - 1; i >= 0; i--)
		{
			if(a[i] == 0 || a[i] == 8 || a[i] == 9)
			{
				a[i] = 0;
				m = m*10 + a[i];
			}
			else if(a[i] == 1)
			{
				a[i] == 1;
				m = m*10 + a[i];
			}
			else
			{
				tmp = 1;
			}
		
		}
		if(m != 0 && tmp == 0)
		{
			printf("%lld\n", m);
		}
		else
		{
			printf("INVALID\n");
		}
	}
	return 0;
}
