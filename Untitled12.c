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
	char c[505];
	scanf("%s", c);
	int a[505];
	int tmp1 = strlen(c);
	for(int i = 0; i < tmp1; i++)
	{
		a[i] = c[i] - '0';
	}
	int b[tmp1];
	int j = strlen(c);
	for(int i = 0; i < tmp1; i++)
	{
		b[j--] = a[i];
	}
	int tmp = strlen(c) - 1;
	int dem = 0;
	for(int i = 0; i < strlen(c); i++)
	{
		if(check(a[i]) && a[i] == b[tmp--])
		{
			dem++;
		}
	}
	if(dem == tmp1)
		printf("YES\n");
	else
		printf("NO\n");
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		process();
	}
	return 0;
}
