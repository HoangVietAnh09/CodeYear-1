#include <stdio.h>
#include <string.h>
#define ll long long
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	for(int i = 1; i < n; i++){
		int x = a[i];
		int pos = i - 1;
		while(pos >= 0 && x < a[pos]){
			a[pos + 1] = a[pos];
			--pos;
		}
		a[pos + 1] = x;
		printf("Buoc %d: %d\n", i - 1, a[i]);
	}

	return 0;
}
