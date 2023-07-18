#include <stdio.h>
#include <math.h>
#define ll long long
#define N 1000000	
void process()
{
	int n;
	scanf("%d", &n);
	for(int i = 2; i <= n; i++)
	{
		while(n%i == 0)
		{
			printf("%d", i);
			n /= i;
			if(n >= i)
			{
				printf("x");
			}
			
		}
	}
}
int main()
{

	process();
	return 0;
}
