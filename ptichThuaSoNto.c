#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
int check(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0)
			return 0;
	}
	return n > 1;
}
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int partition(int a[], int l, int r)
{
	int pivot = a[r];
	int i = l - 1;
	for(int j = l; j < r; j++)
	{
		if(a[j] <= pivot)
		{
			i++;
			swap(&a[i], &a[j]);
		}
	}
	i++;
	swap(&a[i], &a[r]);
	return i;
}
void quickSort(int a[], int l, int r)
{
	if(l >= r)
		return;
	int p = partition(a, l, r);
	quickSort(a, l, p - 1);
	quickSort(a, p + 1, r);
}
int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++)
	{
		int n;
		scanf("%d", &n);
		int f = 0;
		int a[n], b[1005] = {0};
		for(int j = 0; j < n; j++)
		{
			int x;
			scanf("%d", &x);
			if(check(x))
				a[x]++;
			if(a[x] == 1)
				b[f++] = x;
		}
		quickSort(b, 0, f - 1);
		printf("Test %d:\n", i);
		for(int i = 0; i < f; i++)
		{
			printf("%d xuat hien %d lan\n", b[i], a[b[i]]);
		}
	}
	return 0;
}
