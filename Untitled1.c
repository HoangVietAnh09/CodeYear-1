#include <stdio.h>
#include <string.h>
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		char c[1000];
		scanf("%s", c);
		int l = strlen(c);
		for(int i = 0; i < l; i++)
		{
			int tmp = (int)c[i];
			if(tmp >= 48 && tmp <= 57)
			{
				printf("%c", c[i]);
			}
		}
		printf("\n");
	}
}
