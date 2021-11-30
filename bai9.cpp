//Tính T(n) = 1 x 2 x 3…x N bằng C
#include"stdlib.h"
#include"stdio.h"
#include"math.h"
int main()
{
    system("cls");
    float s=1,n;
    printf("\nNhap n = ");
    scanf("%f",&n);
    for(int i=1; i<=n; i++)
    {
       s = s*i;
    }
    printf("\n%.2f",s);
}