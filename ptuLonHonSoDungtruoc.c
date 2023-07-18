#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main ()
{
  int T;
  scanf ("%d", &T);
  while (T--)
    {
      int n, a[1000] = { }, max, valmax;
      scanf ("%d", &n);
      for (int i = 1; i <= n; i++)
	{
	  scanf ("%d", &a[i]);
	} int l[1000] = { };
      l[0] = 0;
      a[n + 1] = -1000000, a[0] = -1000001;
      valmax = a[0];
      max = 0;
      for (int i = 1; i <= n; i++)
	{
	  if (a[i] > a[i - 1] && a[i] >= valmax)
	    {
	      l[i] = max + 1;
	      valmax = a[i];
	    }
	  if (l[i] > max)
	    max = l[i];
	}
      printf ("%d\n", max);
    }
  return 0;
}

