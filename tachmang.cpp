#include"stdio.h"
#include"stdlib.h"
#include"math.h"
int a[100], b[100], c[200];
int n1, n2 , n3;
void nhap(int x[200], int &n){
    do {
    printf("\nNhap so luong phan tu can tao:");
    scanf("%d",&n);
    }while (n<0 || n>100);
    for(int i=0; i<n; i++){
        printf("x[%d] = ",i);
        scanf("%d",&x[i]);
    }
}
void xuat(int x[200], int n){
    for(int i=0; i<n; i++){
        printf(" %d ",x[i]);
    }
}
void tachmang(int x[200], int n3, int a[100], int &n1, int b[100], int &n2){
    int i1=0;  n1=0;
    int i2=0;  n2=0;
    for(int i=0; i<n3; i++){
            if(x[i]%2==0){
               a[i1] = x[i];
                i1++;
                n1++;

            }else{
               b[i2]=  x[i];
                i2++;
                n2++;
            }
    }
}
int main(){
    system("cls");
    nhap(c,n3);
    printf("\nGia tri mang vua nhap la: ");
    xuat(c,n3);
    printf("\nTach mang: ");
    tachmang(c,n3,a,n1,b,n2);
    printf("\nMang chua so chan la: ");
    xuat(a,n1);
    printf("\nMang chua so le la: ");
    xuat(b,n2);

}