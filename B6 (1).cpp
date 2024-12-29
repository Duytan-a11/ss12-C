#include <stdio.h>

int perfectnum(int n){
	int sum=1;
	for(int i=2;i*i<=n;i++){
		if(n % i == 0){
			sum += i;
			if(i != n / i){
				sum += n/i;
			}
		}
	}
	return(sum == n && n != 1);
}

int main(){
	for(int i=1;i<=2;i++){
	int n;	printf("Nhap vao so nguyen N thu %d: ",i);	
	scanf("%d", &n);
	if(perfectnum(n))	
	printf("%d la so hoan hao!\n",n);
	else	
	printf("%d khong phai la so hoan hao!\n",n);
	}
}
