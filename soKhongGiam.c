#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
void process()
{
	char c[18];
	gets(c);
	int tmp = 0;
	for(int i = 0; i < strlen(c); i++)
	{
		if(c[i] > c[i + 1])
		{
			tmp--;
		}		
	}
	if(tmp == 0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
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
