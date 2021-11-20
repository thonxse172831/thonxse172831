//Tính S(n) = 1 + 2 + 3 + … + n bằng C / C++
#include "stdio.h"
int main(){
    int n;
    int tong =0;
    printf("Tinh tong S(n) = 1 + 2 + 3 + ...+ n");
    printf("\nNhap n = ");
    scanf("%d",&n);
    for (int i =1 ;i<=n;i++){
        tong = tong +i;
    }
    printf("\nTong S(%d) = %d",n,tong);
}