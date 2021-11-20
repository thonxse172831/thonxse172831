//nhap va xuat mang thuan va xuat mang nguoc, va dao nguoc mảng
#include "stdio.h"
int x[100];
int n;
void nhapmang(int x[100],int &n){
	printf("Nhap so luong phan tu muon tao: ");
	scanf("%d",&n);
	for (int i = 0; i<n; i++){
		printf("\nx[%d] = ",i);
		scanf("%d",&x[i]);
	}
}
void xuatmang(int x[100],int n){
	printf("\nGia tri cua mang la: ");
	for(int i = 0; i < n; i++){
		printf("%d ",x[i]);
	}
}
void xuatmangnguoc(int x[100],int n){
	printf("\nin mang nguoc: ");
	for (int i =n-1 ; i>=0; i--){
		printf("%d ",x[i]);
	}
}
void daonguocmang(int x[100],int n){
	for(int i =0 ; i<=n; i++){
		
		int tam = x[i];
		x[i] = x[n-i-1]; 
		x[n-i-1] =tam ;
	}
}
int main(){
	nhapmang(x,n);
	daonguocmang(x,n);
	xuatmang(x,n);
	
}