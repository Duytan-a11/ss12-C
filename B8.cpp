#include <stdio.h>

int GCD(int a,int b);

int main(){
	int a=5,b=32;
	printf("Uoc chung lon nhat cua A va B la: %d",GCD(a,b));
}

int GCD(int a,int b){
	while(b != 0){
		int r=a%b;
		a = b;
		b = r;
	}
	return a;
}
