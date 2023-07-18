#include<stdio.h>
#include<math.h> 
int main()
{
  int t, count, j;
  scanf ("%d", &t);
  for (j = 1; j <= t; j++)
    {
      long long n;
      int i;
      scanf ("%lld", &n);
      printf ("Test %d: ", j);
      for (i = 2; i <= n; i++)
	{
	  int count = 0;
	  if (n % i == 0)
	    {
	      while (n % i == 0)
		{
		  count++;
		  n = n / i;
		}
	      printf ("%d(%d) ", i, count);
	    }
	}
      printf ("\n");
    }
}
