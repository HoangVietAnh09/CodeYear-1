#include <math.h>
#include <stdio.h>
#define ll long long

int main()
{
	ll x = 5;
	ll y = 4;
	while(x != y)
	{
		x += 6;
		y += 17;
	}
	printf("%lld", x);
	return 0;
}
