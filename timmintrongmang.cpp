#include "stdio.h"
int n;
int a[100];
void nhap(int a[100], int &n){
    do{
        printf("Nhap so luong mang can tao: ");
        scanf("%d",&n);
    }while (n<0 || n>100);
    for(int i =0; i<n; i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
}
void xuat(int a[100], int n){
    for(int i=0; i<n; i++){
        printf("a[%d] =%2d ",i,a[i]);
    }
}







int main(){
 nhap(a,n);
 printf("\nGia tri mang vua nhap la: ");
 xuat(a,n);
}