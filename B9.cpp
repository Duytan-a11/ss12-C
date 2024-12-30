#include <stdio.h>
#define maxSize 100

int n=0,m=0;
int matrix[maxSize][maxSize]={{0}};

void inputMatrix();
void printMatrix();
void cornerMatrix();
void borderMatrix();
void duongcheochinh();
void duongcheophu();
int isPrime(int n);
void primeMatrix();

int main(){
	int choice=0;
	do{
		printf("------------MENU-------------\n");
		printf("1.Nhap gia tri cac phan tu cua mang\n");
		printf("2.In ra gia tri cac phan tu theo ma tran\n");
		printf("3.In ra cac phan tu o goc theo ma tran\n");
		printf("4.In ra cac phan tu nam tren duong bien theo ma tran\n");
		printf("5.In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
		printf("6.In ra cac phan tu la so nguyen to theo ma tran\n");
		printf("7.Thoat\n");
		printf("Lua chon cua ban: ");	
		scanf("%d", &choice);
		switch(choice){
			case 1:
				{
					inputMatrix();
				}
				break;
			case 2:
				{
					if(n != 0 && m != 0){
						printMatrix();
					}
				}
				break;
			case 3:
				{
					if(n != 0 && m != 0){
						cornerMatrix();
					}
				}
				break;
			case 4:
				{
					if(n != 0 && m != 0){
						borderMatrix();
					}
				}
				break;
			case 5:
				{
					if(n != 0 && m != 0){
						duongcheochinh();
						duongcheophu();
					}
				}
				break;
			case 6:
				{
					if(n != 0 && m != 0){
						primeMatrix();
					}
				}
				break;
			case 7:
				{("Ket thuc chuong trinh!");
				}
				break;
			default:
				printf("Lua chon khong hop le hay nhap lai!\n");
		}
		if(n == 0 && m == 0 && choice >= 1 && choice < 7){
			printf("Ma tran trong hay nhap ma tran vao truoc khi thuc hien thao tac\n");
		}
		printf("\n\n");
	}while(choice != 7);
	
	return 0;
}

void inputMatrix(){
	printf("Nhap vao do dai hang: ");	
	scanf("%d",&n);
	while(n <= 1 || n > maxSize){
		printf("Gia tri nhap vao khong hop le hay nhap lai: ");
		scanf("%d", &n);
	}
	
	printf("Nhap vao do dai cot: ");	
	scanf("%d",&m);
	while(m <= 1 || m > maxSize){
		printf("Gia tri nhap vao khong hop le hay nhap lai: ");
		scanf("%d", &m);
	}
	printf("Nhap hoan thanh!\n");
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("Matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Nhap gia tri hoan thanh!\n");
}

void printMatrix(){
	printf("Day la ma tran cua ban:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}

void cornerMatrix(){
	printf("Cac goc cua ma tran:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i == 0 && j == 0 || i == 0 && j == m-1 || i == n-1 && j == 0 || i == n-1 && j == m-1){
				printf("%d ",matrix[i][j]);
			}
			else	
			printf("  ");
		}
		printf("\n");
	}
}

void borderMatrix(){
	printf("Hien thi duong bien cua ma tran:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i == 0 || j == 0 || i == n - 1 || j == m - 1){
				printf("%d ",matrix[i][j]);
			}
			else	
			printf("  ");
		}
		printf("\n");
	}
}

void duongcheochinh(){
	printf("Duong cheo chinh la:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i == j)	
			printf("%d ",matrix[i][j]);
			else	
			printf("  ");
		}
		printf("\n");
	}
}

void duongcheophu(){
	printf("Duong cheo phu la:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i == m-j-1)	
			printf("%d",matrix[i][j]);
			else	
			printf("  ");
		}
		printf("\n");
	}
}

int isPrime(int n){
	if(n < 2)	return 0;
	
	for(int i=2;i*i<=n;i++){
		if(n % i == 0)	return 0;
	}
	
	return 1;
}

void primeMatrix(){
	printf("Cac so nguyen to tren ma tran:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(isPrime(matrix[i][j]))	
			printf("%d ",matrix[i][j]);
			else	
			printf("  ");
		}
		printf("\n");
	}
}
