#include "stdio.h"
int  kt(int n){
    int i;
    if(n<2)
    return 0;
    for (i= 2; i<n-1; i++){
        if( n%i==0){
            
            return 0;
        }
        
        return 1;
    }
}
int main(){
    int n;
    do{
        printf("Nhap n = ");
        scanf("%d", &n);
    } while (n<0);
   int kq = kt(n);
    if(kq==0){
        printf("%d khong phai la so nguyen to!",n);
    }else
        printf("%d la so nguyen to!",n);
}
