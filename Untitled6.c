#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
int tong(ll n)
{
	int sum = 0;
	while(n != 0)
	{
		int du = n % 10;
		sum += du;
		n /= 10;
	}
	return sum;
}

void process()
{
	int n;
	scanf("%d", &n);
	int tmp = n;
	while(tmp >= 10)
	{
		tmp = tong(tmp);
	}
	printf("%d", tmp);
}
int main()
{
	process();
	return 0;
}
