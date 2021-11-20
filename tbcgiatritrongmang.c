//trung binh cong cac gia tri nhap vao mang a[]
#include"stdio.h"
#include"math.h"
//ham tinh trung binh cong
void trungbinhcong (int x[],int n){
    int tong =0;
    
    for(int i=1;i<=n;i++){
        tong += x[i];
       
    }
    float tbc =  tong/n;
    printf("\nTrung binh cong cac gia tri cua mang la: %.2f",tbc);
}
//ham nhap du lieu
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
    //goi ham
    trungbinhcong(a,n);
}