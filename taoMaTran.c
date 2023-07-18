#include <stdio.h> 
#include <math.h>
int check(int n)
{
  while (n > 10)
    {
      if (n % 10 >= (n / 10 % 10))
	return 0;
      n /= 10;
    }
  return 1;
}

int main()
{
  int t;
  long long a, b;
  scanf ("%d", &t);
  while (t--)
    {
      int dem = 0;
      scanf ("%ld %ld", &a, &b);
      if (a < 10)
	a = 10;
      for (int i = a; i <= b; i++)
	{
	  if (check (i) == 1)
	    dem++;
	}
      if (dem > 0)
	printf ("%d\n", dem);
    }
}
