//Tính S(n) = 1^2 + 2^2 + … + n^2 bằng C / C++
#include "stdio.h"
int main(){
    int n;
    float s;
    printf("\nNhap n = ");
    scanf("%d",&n);
    for(int i = 1; i<=n;i++){
        s = pow(i,2);
    }
    printf("\nS(n) = 1^2 + 2^2 + … + n^2 = %.2f",s);
}