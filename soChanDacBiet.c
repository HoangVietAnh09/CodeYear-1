#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
void process()
{
	char c[10004];
	scanf("%s", c);
	int n = strlen(c);
	int a[10004];
	for(int i = 0; i < n; i++)
	{
		a[i] = c[i] - '0';
	}
	int tmp = n;
	for(int i = 0; i < n; i++)
	{
		if(a[i]%2 == 0)
		{
			tmp--;
		}
	}
	if(tmp == 0)
		printf("YES");
	else
		printf("NO");
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
