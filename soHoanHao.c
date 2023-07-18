#include<stdio.h>
#include<math.h> 
#define ll long long
int tinhTong(int n)
{
	int tmp = n;
	int sum = 0;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			if(i == 1)
			{
				sum += i;
			}
			else if(i * i == n)
			{
				sum += i;
			}
			else
			{
				sum += i + n/i;
			}
		}
	}
	if(tmp == sum)
		return n > 1;
	return 0;
}
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);
	int d = fmin(n, m);
	int e = fmax(n, m);
	for(int i = d; i <= e; i++)
	{
		if(tinhTong(i))
		{
			printf("%d ", i);
		}
	}
}
