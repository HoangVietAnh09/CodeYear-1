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
	int n;
	scanf("%d", &n);
	printf("%d %d %d", n/365, (n%365)/7, (n%365)%7);
	return 0;
}
