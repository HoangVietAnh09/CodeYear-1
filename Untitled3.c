#include <stdio.h>
#include <math.h>
#include <string.h>
#define ll long long
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
int uoc(int n)
{
	int dem = 0;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if(n%i == 0)
		{
			if(i*i == n)
			{
				dem++;
			}
			else
			{
				dem += 2;
			}
		}		
	}
	return dem;
}
int check(int a[], int n)
{
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(a[i] > 2*a[j])
			{
				dem++;
			}
		}
	}
	return dem;
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
	int tmp = check(a, n);
	printf("%d", tmp);
}
int main()
{
	process();
	return 0;
}
