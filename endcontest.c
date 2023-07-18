#include <stdio.h>
#include <string.h>
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
	for(int j = l; j <= r; j++)
	{
		if(a[j] <= pivot)
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
	if(l >= r)	return;
	int p = partition(a, l, r);
	quickSort(a, l, p - 1);
	quickSort(a, p + 1, r);
}
int main()
{
	char c[100];
	scanf("%s", c);
	int a[100] = {0};
	int n = strlen(c);
	for(int i = 0; i < n; i++)
	{
		a[i] = c[i] - '0';
	}
	quickSort(a, 0, n - 1);
	for(int i = 0; i < n; i++)
	{
		printf("%d", a[i]);
	}
	
}
