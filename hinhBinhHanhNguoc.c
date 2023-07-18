#include <stdio.h>
#include <math.h>
#define ll long long
void process()
{
	int n, m;
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m + i - 1; j++)
		{
			if(j <= i - 1)
			{
				printf("~");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
}
int main()
{
	process();
	return 0;
}
