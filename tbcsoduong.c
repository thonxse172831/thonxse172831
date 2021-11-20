//trung binh cong cac gia tri nhap vao mang a[]
#include"stdio.h"
#include"math.h"

//ham tinh trung binh cong
float trungbinhcong (int x[],int n){
    int tong =0 ;
    int soluongsoduong=0;
    for(int i=1;i<=n;i++){
        if(x[i]>0){
            tong += x[i];
           soluongsoduong++;
        }    
     }
     return soluongsoduong>0?(float) tong/soluongsoduong:-1;
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
    float tbcsd = trungbinhcong(a,n);
    if(tbcsd>0){
        printf("\nTrung binh cong so duong la : %.2f",tbcsd);
    }else
        printf("\nMang khong co so duong!");

}
