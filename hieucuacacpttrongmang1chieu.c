//hieu cua cac gia tri trong mang a[100]
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
    //tinh hieu va in ra man hinh
    int hieu = 0;
     for(i=1;i<=n; i++){
        hieu += a[i];
    }
     for(i=1;i<=n; i++){
        printf("\na[%d] = %d",i,a[i]);
    }
    printf("\nHieu cua cac phan tu trong mang la %d",hieu);


}