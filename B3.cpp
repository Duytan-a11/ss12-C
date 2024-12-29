#include <stdio.h>

int giaithua(int n);

int main(){
	int n=7;
	
	printf("Giai thua cua %d la: %d",n,giaithua(n));
}

int giaithua(int n){
	int gt=n;
	while(--n){
		gt*=n;
	}
	return gt;
}
