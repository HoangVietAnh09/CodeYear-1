#include <stdio.h>
#include <math.h>
#define ll long long
ll uocChung(ll a, ll b)
{
	if(b == 0)
		return a;
	return uocChung(b, a%b);
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		for(int i = 2; i <= n; i++)
		{
			int dem = 0;
			while(n%i == 0)
			{
				dem++;
				n /= i;
			}
			if(n%i != 0 && n > i)
			{
				printf("%d^%d", i, dem);
				printf("*");
			}
			
		}
		printf("\n");
	}

	
	return 0;
}
