#include <stdio.h>
#include <math.h>
#define ll long long
ll tong(int n)
{
	ll sum = 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			while(n%i == 0)
			{
				sum += i; 
				n /= i;
			}
		}
	}
	if(n > 1)
	{
		sum += n;
	}
	return sum;
}
void process()
{
	int n;
	scanf("%d", &n);
	int a[1000005] = {0}, b[100005] = {0};
	int f = 0;
	while(n != 0)
	{
		int du = n%10;
		if(check(du))
		{
			a[du]++;
			if(a[du] == 1)
			{
				b[f++] = du;
			}
		}
	}
	for(int i = f - 1; i >= 0; i--)
	{
		printf("%d %d", b[i], a[b[i]]);
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
