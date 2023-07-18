#include <stdio.h>
#include <math.h>
#define ll long long
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int tong(int n)
{
	int sum = 0;
	while(n != 0)
	{
		int du = n%10;
		sum += du;
		n /= 10;
	}
	return sum;
}
void process()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int tmp1 = a, tmp2 = b;
	if(tong(a) <= tong(b))
	{
		printf("%d %d", tmp1, tmp2);
	}
	else
	{
		printf("%d %d", tmp2, tmp1);
	}
}
int main()
{
//	int t;
//	scanf("%d", &t);
//	while(t--)
//	{
		process();
//		printf("\n");
//	}
	return 0;
}
