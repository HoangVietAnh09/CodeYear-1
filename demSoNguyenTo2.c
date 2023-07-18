#include <stdio.h>
#include <math.h>
#include <string.h>
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
int check1(int n)
{
	while(n != 0)
	{
		int du = n%10;
		if(check(du))
			n /= 10;
		else
			break;
	}
	if(n == 0)
		return 1;
	return 0;
}
void process()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int dem = 0;
	int a = fmin(n, m);
	int b = fmax(n, m);
	for(int i = a; i <= b; i++)
	{
		if(check(i) && check1(i))
			dem++;
	}
	printf("%d", dem);
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		process();
		printf("\n");
	}
	return 0;
}
