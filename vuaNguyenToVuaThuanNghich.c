#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
int check(int n)
{
	int tmp = n;
	int sum = 0;
	while(n != 0)
	{
		int du = n%10;
		sum = sum*10 + du;
		n /= 10;
	}
	if(sum == tmp)
		return 1;
	return 0;
}
int check1(int n)
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
	int n, m;
	scanf("%d %d", &n, &m);
	int tmp = 0;
	for(int i = n; i <= m; i++)
	{
		if(check(i) && check1(i))
		{
			printf("%d ", i);
			tmp++;
		}
		if(tmp == 10)
		{
			printf("\n");
			tmp = 0;
		}
	}

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
