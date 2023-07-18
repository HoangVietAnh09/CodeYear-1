#include <stdio.h>
#include <math.h>
#define ll long long
int tong(int n)
{
	int sum = 0;
	while(n != 0)
	{
		int du = n%10;
		sum += du;
		n /= 10;
	}
	return sum;
}
int tinh(int n)
{
	int sum = 0;
	for(int i = 2; i <= n; i++)
	{
		while(n%i == 0)
		{
			if(i >= 10)
			{
				sum += tong(i);
			}
			else
			{
				sum += i;
			}
			n /= i;
		}
	}
	return sum;
}
void process()
{
	int n;
	scanf("%d", &n);
	if(tong(n) == tinh(n))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
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
