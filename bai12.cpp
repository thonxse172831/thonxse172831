//Tính S(n) = x + x^2 + x^3 + … + x^n bằng C
#include"stdio.h"
#include"math.h"
#include"stdlib.h"
int main()
{
    system("cls");
    int n,x;
    float s;
    printf("\nNhap n= ");
    scanf("%d",&n);
    printf("\nNhap x = ");
    scanf("%d",&x);
    
    for(int i=1; i<=n; i++)
    {
        s = s+ pow(x,i);
    }
    printf("\n%.2f",s);
}