#include <stdio.h>

int isPrime(int n){
	if(n < 2)	return 0;
	for(int i=2;i*i<=n;i++){
		if(n % i == 0)	return 0;
	}
	return 1;
}

int main(){
	for(int i=1;i<=2;i++){
		int n=0;	printf("Nhap vao so nguyen thu %d: ",i);	
		scanf("%d", &n);
		if(isPrime(n))	
		printf("%d la so nguyen to!\n",n);
		else	
		printf("%d khong phai la so nguyen to!\n",n);
	}
}
