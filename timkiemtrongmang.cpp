#include "stdio.h"
int a[100];
int n;
void nhapmang(int a[100],int &n){
    do{
        printf("Nhap so luong phan tu can tao: ");
        scanf("%d",&n);
    }while (n<0||n>100);
    for(int i =0; i<n ; i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
    
}
void xuatmang(int a[100],int n){
    for(int i =0;i < n ;i++){
        printf("\nGia tri cua mang la: ");
        printf("a[%d] = %d", i ,a[i]);
    }
}
int timkiem(int a[100],int n, int tk){
    int kq = 0;
    for(int i =0; i<n; i++){
        if(tk==a[i]){
            kq =1;
            return 1;
        } else
         return kq;

    }          
}
int thuchientimkiem(int a[100],int n){
    int tk;
    printf("\nNhap so can tim: ");
    scanf("%d",&tk);
    int kq = timkiem(a,n,tk);
    if(kq=1){
        printf("\nDa tim thay!");
    }else 
        printf("\nKhong tim thay!");

}

int main(){
    nhapmang(a,n);
    xuatmang(a,n);
    printf("\n");
    thuchientimkiem(a,n);
    //xuatmang(a,n);
}