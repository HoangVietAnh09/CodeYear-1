#include <stdio.h>
#include <math.h>
#define ll long long 
int demDuong(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i]%2 == 0){
			dem++;
		}
	}
	return dem;
}
int demLe(int a[], int n){
	int dem = 0;
	for(int i = 0; i < n; i++){
		if(a[i]%2 != 0){
			dem++;
		}
	}
	return dem;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	int demC = demDuong(a, n);
	int demL = demLe(a, n);
	if(demC == 0 || demL == 0){
		printf("0");
	}
	else{
		printf("%d", demC*demL);
	}
	
	return 0;
}
