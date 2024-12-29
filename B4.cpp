#include <stdio.h>

int max(int a[],int n){
	int maxvalue=a[0];
	for(int i=1;i<n;i++){
		if(maxvalue < a[i])	maxvalue = a[i];
	}
	return maxvalue;
}

int main(){
	int n=10,a[n]={10,3,11,5,89,0,99,1,55,37};
	printf("Gia tri lon nhat trong mang cua ban la: %d",max(a,n));
}
