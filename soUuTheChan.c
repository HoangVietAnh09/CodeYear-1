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

void process()
{
	char c[100];
	scanf("%s", c);
	int x[1000];
	int a[1004] = {0}, b[1004] = {0};
	for(int i = 0; i < strlen(c); i++)
	{
		x[i] = c[i] - '0';
	}
	int k = 0;
	for(int i = 0; i < strlen(c); i++)
	{
		if(check(x[i]))
		{
			a[x[i]]++;
			if(a[x[i]] == 1)
			{
				b[k++] = x[i];
			}
		}
		
	}
	for(int i = 0; i < k; i++)
	{
		printf("%d %d\n", b[i], a[b[i]]);
	}
}
int main()
{	
	process();
	return 0;
}
