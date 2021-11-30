//Tính S(n) = x^2 + x^4 + … + x^2n bằng C
#include"stdlib.h"
#include"stdio.h"
#include"math.h"
int main()
{
    system("cls");
    int n,x;
    float s;
    printf("\nNhap n = ");
    scanf("%d",&n);
    printf("\nNhap x = ");
    scanf("%d",&x);
    for(int i=1; i<=n; i++)
     {
     s = s+ pow(x,2.0*i);
     }    
     
   
    printf("\n%.2f",s);
}