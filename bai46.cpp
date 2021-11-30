// Liệt kê số nguyên tố trong mảng 1 chiều
#include"stdio.h"
#include"math.h"
int n, a[100];
void nhapmang(int a[100], int &n){
    do{
        printf("Nhap so luong mang can tao: ");
        scanf("%d",&n);
    }while (n<0 || n>100);
    for (int i = 0; i<n; i++){
        printf("\na[%d] = ", i );
        scanf("%d",&a[i]);
    }
}  
int kiemtrasnt(int n){
    if(n<1) 
    return 0;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            return 0;
        }
        
    }return 1;

}
void xuatmang(int a[100], int n){
    printf("\n");
    for(int i=0; i<n; i++){
        printf("a[%d] =%d ", i,a[i]);
    }
}
int main(){
    nhapmang(a,n);
    xuatmang(a,n);
    printf("\nCac so nguyen to trong mang:" );
    int j=0;
    for(int i=0; i<n; i++){ 
       if(kiemtrasnt(a[i])){
        printf("%2d",a[i]);  
         j++;        
        } 
    }
   printf("\nSo luong so nguyen to co trong mang la: %d",j);
}
    