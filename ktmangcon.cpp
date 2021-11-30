#include"stdio.h"
#include"stdlib.h"
#include"math.h"
int a[100],b[200];
int n1, n2;
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
    printf("\nGia tri mang vua nhap la: ");
    for(int i=0; i<n; i++){
        printf(" %d ",x[i]);
    }
}
int kiemtramangcon(int a[100], int n1, int b[200], int n2){
    int kq =0;

   if(n1>=n2){
       for(int i = 0; i<n1; i++){
           if(a[i]==b[0]){
               int j;
               for(j=0; j<n2; j++){
                   if(a[i+j]!=b[j])
                   break;

               }
               if(j==n2)
               kq =1;

           }
       }
   }
        return kq;



}
int main(){
    system("cls");
    printf("\nNhap mang 1: ");
    nhap(a,n1);
    xuat(a,n1);
    printf("\nNhap mang 2: ");
    nhap(b,n2);
    xuat(b,n2);
   int kt = kiemtramangcon(a,n1,b,n2);
    if(kt){
        printf("\nMang 2 la mang con cua 1");

    }else {
        printf("\nMang 1 la con cua mang 2");
    }
}