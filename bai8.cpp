//Tính S(n) = 1/2 + 3/4 + 5/6 + … + (2n + 1)/( 2n + 2) bằng C
#include"stdlib.h"
#include"stdio.h"
#include"math.h"
int main()
{
    system("cls");
    float s,n;
    printf("\nNhap n = ");
    scanf("%f",&n);
    for(int i=0; i<=n; i++)
    {
       s = s + (2.0*i+1)/(2*i+2);
    }
    printf("\n%.2f",s);
}