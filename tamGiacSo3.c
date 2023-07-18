#include<stdio.h>
#include <math.h>
#define ll long long
int deQuy(int n, int k)
{
	if(k == 0 || k == n - 1)
		return 1;
	return deQuy(n - 1, k - 1) + deQuy(n - 1, k);
}
int main ()
{
	int n;
	scanf ("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		for(int k = 0; k < i; k++)
		{
			printf("%d ", deQuy(i, k));
		}
		printf("\n");
	}
	return 0;
}

