//Tính S(n) = x + x^3 + x^5 + … + x^(2n - 1) bằng C
#include"stdio.h"
#include"math.h"
#include"stdlib.h"
int main()
{
    system("cls");
    int n,x;
    float s;
   
    printf("\nNhap x = ");
    scanf("%d",&x);
    printf("\nNhap n= ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
      s = s + pow(x, ((2*i)-1.0));
      
    }
    printf("\n%.2f",s);
}