#include<stdio.h>
#include<math.h>
int
nto (int n)
{
  if (n < 2)
    return 0;
  for (int i = 2; i <= sqrt (n); i++)
    if (n % i == 0)
      {
	return 0;
	break;
      }
  return 1;
}

int
main ()
{
  int t, n;
  scanf ("%d", &t);
  for (int j = 1; j <= t; j++)
    {
      scanf ("%d", &n);
      int a[n], b[10000] = { 0 };
      for (int i = 0; i < n; i++)
	{
	  scanf ("%d", &a[i]);
	} int tg;
      for (int i = 0; i < n - 1; i++)
	{
	  for (int j = i + 1; j < n; j++)
	    {
	      if (a[i] > a[j])
		{
		  tg = a[i];
		  a[i] = a[j];
		  a[j] = tg;
		}
	    }
	}
      for (int i = 0; i < n; i++)
	if (nto (a[i]) == 1)
	  b[a[i]]++;
      printf ("Test %d:\n", j);
      for (int i = 0; i < n; i++)
	if (b[a[i]] > 0)
	  {
	    printf ("%d xuat hien %d lan\n", a[i], b[a[i]]);
	    b[a[i]] = 0;
	  }
    }
  return 0;
}

