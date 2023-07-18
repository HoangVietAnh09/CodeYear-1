#include <stdio.h>
#include <math.h>
#define ll long long
void process()
{
	int n;
    scanf("%d", &n);
    int i = 1;
    int count = 0;
    while (i <= n / i)
	{
		if (n % i == 0)
	    {
	    	if (i % 2 == 0)
				count++;
	      	if (n / i % 2 == 0)
				count++;
	      	if (n / i == i && i % 2 == 0)
				count--;
		}
	i++;
	}
    printf ("%d\n", count);
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
