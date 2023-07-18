#include <stdio.h>
#include <math.h>
#define ll long long
void process()
{
	int n;
	scanf("%d", &n);
	int dem = 0;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			if(i%2 == 0)
			{
				dem++;
			}
			if(i*i != n && (n/i)%2 == 0)
			{
				dem++;
			}
		}
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
