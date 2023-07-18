#include <stdio.h>
#include <math.h>
#define ll long long
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n;
	    scanf ("%d", &n);
	    int tich = 1;
	    for (int i = 2; i <= n; i++)
		{
			while (n % i == 0)
		    {
		    	if ((n / i) % i != 0)
				tich = tich * i;
		    	n = n / i;
		    }
		}
	    printf ("%d\n", tich);

	}

	return 0;
}
