//Tính S(n) = 1/2 + 1/4 + … + 1/2n bằng C
#include"stdlib.h"
#include"stdio.h"
#include"math.h"
int main()
{
    system("cls");
    float s,n;
    printf("\nNhap n = ");
    scanf("%f",&n);
    for(int i=1; i<=n; i++)
    {
        s = s+ 1.0/(i*2);
    }
    printf("\n%.2f",s);
}