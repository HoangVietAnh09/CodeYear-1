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
void process()
{
	int n;
	scanf("%d", &n);
	int a[10005] = {0}, b[10005] = {0};
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
		n /= 10;
	}
	for(int i = f - 1; i >= 0; i--)
	{
		printf("%d %d\n", b[i], a[b[i]]);
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
