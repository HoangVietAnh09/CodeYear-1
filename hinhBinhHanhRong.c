#include <stdio.h>
#include <math.h>
#define ll long long
int check(int n)
{
	while(n != 0)
	{
		int du = n%10;
		
	}
}

void process()
{
	int n;
	scanf("%d", &n);
	int k = 2*n;
	for(int i = n; i >= 1; i--)
	{
		if(i == n || i == 1)
		{
			for(int j = 1; j <= k - 1; j++)
			{
				if(j < i)
				{
					printf("~");
				}
				else
				{
					printf("*");
				}
			}
		}
		else
		{
			for(int j = 1; j <= k - 1; j++)
			{
				if(j < i)
				{
					printf("~");
				}
				else
				{
					if(j == i || j == k - 1)
					{
						printf("*");
					}
					else
					{
						printf(".");
					}
				}
				
			}
			printf("\n");
		}
		k--;
		printf("\n");
	}
}
int main()
{
	process();
	return 0;
}
