#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
int nto(int n)
{
	for(int i =2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
			return 0;
	}
	return n > 1;
}
int scp(int n)
{
	int i = sqrt(n);
	if(i*i == n)
		return 1;
	return 0;
}
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
int checkfib(int n)
{
	if(scp(5*n*n+4) || scp(5*n*n-4))
		return 1;
	return 0;
}

void process()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int min = fmin(a, b);
	int max = fmax(a, b);
	for(int i = min; i <= max; i++)
	{
		if(checkfib(tong(i)) && nto(i))
		{
			printf("%d ", i);
		}
	}
	
}
int main()
{
	process();
	return 0;
}
