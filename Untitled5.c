#include <stdio.h>
#include <math.h>
#define ll long long
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
int partition(int a[], int l, int r)
{
	ll pivot = a[r];
	int i = l - 1;
	for(int j = l; j < r; j++)
	{
		if(a[j] >= pivot)
		{
			i++;
			swap(&a[j], &a[i]);
		}
	}
	i++;
	swap(&a[i], &a[r]);
	return i;
}
void quickSort(int a[], int l, int r)
{
	if(l >= r) return;
	int p = partition(a, l , r);
	quickSort(a, l, p - 1);
	quickSort(a, p + 1, r);
}
void process()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	quickSort(a, 0, n - 1);
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}
int main()
{
	process();
	return 0;
}
