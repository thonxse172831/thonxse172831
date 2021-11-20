//tinh giai thua trong mang 1 chieu
#include"stdio.h"
int main(){
    int a[100];
    int n,i;
    do{
        printf("\nNhap so luong gia tri trong mang can tao: ");
        scanf("%d",&n);
    } while(n<0||n>100);
    //nhap du lieu vao a[]
    for(i=1;i<=n; i++){
        printf("\na[%d] = ",i);
        scanf("%d",&a[i]);
    }
    //tich cac gia tri 
    float tich = 1.0;
    for(i=1;i<=n; i++){
        tich = tich *a[i];
    }
    //xuat kq ra man hinh
    printf("\nTich cac phan tu trong mang la %.2f",tich);
}