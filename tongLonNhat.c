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
		ll a[n];
		for(int i = 0; i < n; i++){
			scanf("%lld", &a[i]);
		}
		ll sum1 = 0, sum2 = -10e12;
		for(int i = 0; i < n; i++){
			sum1 += a[i];
			if(sum1 < 0){
				sum1 = 0;
			}
			if(sum2 < sum1){
				sum2 = sum1;
			}
		}
		printf("%lld\n", sum2);
	}
	return 0;
}
