//Tính T(x, n) = x^n bằng C 
#include"stdlib.h"
#include"stdio.h"
#include"math.h"
int main()
{
    system("cls");
    float x,n,t;
    printf("\nNhap n = ");
    scanf("%f",&n);
    printf("\nNhap x = ");
    scanf("%f",&x);
    t = pow(x,n);
    printf("\n%.2f",t);
}