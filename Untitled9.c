#include <stdio.h>
#include <math.h>
#define ll long long
int chan(int n)
{
	if(n%2 == 0)
		return 1;
	return 0;
}
int uoc(int n)
{
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n%i == 0 && chan(i))
			dem++;
	}
	printf("%d", dem);
}
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
		scanf("%d", &n);
		uoc(n);
		printf("\n");
	}
	return 0;
}
