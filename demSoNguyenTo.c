#include<stdio.h>
#include<math.h> 
#define ll long long
int soNT(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
			return 0;
	}
	return n > 1;
}
int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++)
	{
		int n;
		scanf("%d", &n);
		int a[1000], b[1000] = {0};
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < 10005; i++)
		{
			if(soNT(a[i]))
			{
				b[a[i]]++;
			}
		}
		printf("Test %d:\n", i);
		for(int i = 0; i < 100005; i++)
		{
			if(b[i] != 0)
			{
				printf("%d xuat hien %d lan\n", i, b[i]);
			}
		}
		
	}
}
