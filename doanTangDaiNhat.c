#include <stdio.h>
#include <string.h>
#include <math.h>
#define ll long long
int main(){
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; i++){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int res = 0, count = 0, b[n], dem = 1;
		for(int i = 1; i < n; i++){
			if(a[i] > a[i-1]) dem++;
			else dem = 1;
			if(dem > res){
				res = dem;
				b[0] = i - res + 1;
				count = 1;
			}
			else if(dem == res){
				b[count] = i - res + 1;
				count++;
			}
		}
		printf("Test %d:\n", i);
		printf("%d\n", res);
		for(int i = 0; i < count; i++){
			for(int j = 0; j < res; j++){
				printf("%d ", a[b[i] + j]);
			}
			printf("\n");
		}
		
	}
	return 0;
}
