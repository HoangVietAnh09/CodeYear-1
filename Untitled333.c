#include <stdio.h>
#include <string.h>
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		if(i == 1 || i == n)
		{
			for(int j = 1; j <= n; j++)
			{
				printf("*");
			}
			printf("\n");
		}
		else
		{
			for(int j = 1; j <= n; j++)
			{
				if(j < (n - i)/2 || j > (n + i)/2)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
			printf("\n");
		}
	
	}
	return 0;
	
}
