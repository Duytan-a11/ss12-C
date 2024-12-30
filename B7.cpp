#include <stdio.h>
#define maxSize 100

int matrix[maxSize][maxSize]={0};

void matrixinput(int n,int m);
void matrixoutput(int n,int m);

int main(){
	int n,m;
	printf("Nhap vao so hang: ");	
	scanf("%d",&n);
	printf("Nhap vao so cot: ");	
	scanf("%d",&m);
	
	matrixinput(n,m);
	matrixoutput(n,m);
}

void matrixinput(int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Matrix[%d]: ",i);
			scanf("%d",&matrix[i][j]);
		}
	}
}

void matrixoutput(int n,int m){
	printf("Ma tran cua ban la:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
