//Tính tích tất cả các “ước số” của số nguyên dương n bằng C / C++
#include"stdio.h"
int main(){
    int n;
    float tich = 1;
    do{
        printf("Nhap n = ");
        scanf("%d",&n);

    }while(n<0);
    for (int i = 1; i <= n; i++){
        if(n%i ==0 );
        printf("%4d", i );
        tich = tich*i;

    }
    printf("\nTich cac uoc so cua so nguyen duong n la: %.2f",tich);
}