#include <stdio.h>
#include <math.h>
#define ll long long
#define e 1000000
int prime[e+1];
void solve(int n){
	for(int i = 0; i <= n; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2; i * i <= n; i++){
		if(prime[i]){
			for(int j = i*i; j <= n; j += i){
				prime[j] = 0;
			}
		}
	}
}
int main(){
	solve(e);
	int n;
	scanf("%d", &n);
	if(prime[n]) printf("%d la so nguyen to", n);
	else printf("%d khong la so nguyen to", n);
	return 0;
}
