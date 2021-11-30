//Tính S(n) = 1/2 + 2/3 + 3/4 + …. + n / (n + 1) bằng C
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
        s = s+ i/(i+1.0);
    }
    printf("\n%.2f",s);
}