#include <stdio.h>
#include <math.h>
#define ll long long
int main()
{
	int n;
	scanf("%d", &n);
	int a[10005];
	int j = 0;
	while(n != 0)
	{
		a[j++] = n%2;
		n /= 2;
	}
	for(int i = j - 1; i >= 0; i--)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
